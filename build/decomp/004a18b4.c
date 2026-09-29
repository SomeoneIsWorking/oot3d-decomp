// OoT3D decomp @ 004a18b4  name=FUN_004a18b4  size=272

undefined4 FUN_004a18b4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;

  puVar1 = DAT_004a19c4;
  pcVar5 = (code *)*DAT_004a19c4;
  piVar2 = param_1;
  if (pcVar5 != (code *)0x0) {
    piVar2 = (int *)DAT_004a19c4[1];
  }
  if (((pcVar5 != (code *)0x0 && piVar2 != (int *)0x0) && (5 < param_4)) &&
     (iVar3 = (*pcVar5)(0x3c), iVar3 != 0)) {
    iVar4 = (*(code *)*puVar1)(param_4 << 2);
    *(int *)(iVar3 + 0x28) = iVar4;
    if (iVar4 != 0) {
      iVar4 = (*(code *)*puVar1)(param_4 << 2);
      *(int *)(iVar3 + 0x2c) = iVar4;
      if (iVar4 != 0) {
        iVar4 = FUN_004a1dc4(iVar3,param_2,param_3,param_4,0,1);
        if (iVar4 != 0) {
          *(undefined4 *)(iVar3 + 0x30) = 0;
          *(undefined4 *)(iVar3 + 0x34) = 0;
          *(undefined4 *)(iVar3 + 0x38) = 0;
          *(undefined4 *)(iVar3 + 0x20) = param_2;
          *(undefined4 *)(iVar3 + 0x24) = param_3;
          *param_1 = iVar3;
          return 1;
        }
        (*(code *)puVar1[1])(*(undefined4 *)(iVar3 + 0x2c));
      }
      (*(code *)puVar1[1])(*(undefined4 *)(iVar3 + 0x28));
    }
    (*(code *)puVar1[1])(iVar3);
    return 0;
  }
  return 0;
}
