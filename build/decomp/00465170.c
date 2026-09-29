// OoT3D decomp @ 00465170  name=FUN_00465170  size=116

void FUN_00465170(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_r8;

  puVar1 = DAT_004651e4;
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return;
  }
  iVar4 = 0;
  do {
    if (param_1 != (int *)0xfffffffc) {
      unaff_r8 = param_1 + iVar4;
      iVar2 = unaff_r8[1];
    }
    if (param_1 != (int *)0xfffffffc && iVar2 != 0) {
      uVar3 = FUN_003488e4();
      (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,uVar3);
      unaff_r8[1] = 0;
    }
    do {
      iVar4 = iVar4 + 1;
      if (0x4e < iVar4) {
        return;
      }
      iVar2 = *param_1;
    } while (iVar2 == 0);
  } while( true );
}
