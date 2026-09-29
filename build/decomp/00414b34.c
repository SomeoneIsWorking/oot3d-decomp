// OoT3D decomp @ 00414b34  name=FUN_00414b34  size=168

undefined4 FUN_00414b34(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;

  uVar3 = DAT_00414be0;
  if ((code *)*DAT_00414bdc == (code *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(code *)*DAT_00414bdc)(0x10000,0x100,0,DAT_00414be0);
  }
  piVar1 = DAT_00414be4;
  *DAT_00414be4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    FUN_00343280(iVar2,uVar3);
    uVar5 = FUN_00303680();
    iVar4 = (int)((ulonglong)uVar5 >> 0x20);
    iVar2 = (int)uVar5;
    if (iVar2 != 0) {
      iVar4 = 1;
    }
    *(int *)(*piVar1 + 0x800) = iVar2;
    if (iVar2 == 0) {
      if ((code *)*DAT_00414be8 != (code *)0x0) {
        (*(code *)*DAT_00414be8)(0x10000,0x100,0);
      }
      *piVar1 = 0;
      return 0xffffffff;
    }
    uVar3 = 0;
    piVar1[1] = iVar4;
  }
  return uVar3;
}
