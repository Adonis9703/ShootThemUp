// Shoot Them Up Game. All Rights Reserved


#include "Weapon/STULaunchWeapon.h"
#include "Weapon/STUProjectile.h"
#include "Kismet/GameplayStatics.h"

void ASTULaunchWeapon::StartFire()
{
    MakeShot();
}

void ASTULaunchWeapon::MakeShot()
{
    const FTransform SpawnTransform(FRotator::ZeroRotator, GetMuzzleWorldLocation());
    const auto Projectile = UGameplayStatics::BeginDeferredActorSpawnFromClass(GetWorld(), ProjectileClass, SpawnTransform);
    // todo set projectile params

    UGameplayStatics::FinishSpawningActor(Projectile, SpawnTransform);
}