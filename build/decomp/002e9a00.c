// OoT3D decomp @ 002e9a00  name=FUN_002e9a00  size=84

void FUN_002e9a00(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar1 = *(int *)(DAT_002e9a18 + 0x34);
  if (iVar1 != 0) {
    FUN_002e0f90();
    iVar2 = (**(code **)(*(int *)*DAT_00454a18 + 8))((int *)*DAT_00454a18,0x234);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_00347258();
    }
    *(undefined4 *)(iVar1 + 0x114) = uVar3;
    *(undefined1 *)(iVar1 + 0x11d) = 2;
    return;
  }
  return;
}
