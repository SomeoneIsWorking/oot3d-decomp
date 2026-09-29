// OoT3D decomp @ 00487434  name=FUN_00487434  size=120

void FUN_00487434(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;

  iVar3 = 0;
  pcVar5 = (code *)*DAT_004874ac;
  uVar6 = DAT_004874ac[1];
  do {
    if (param_2 == 0) {
      return;
    }
    if ((param_2 & 1) != 0) {
      if (iVar3 < 0x10) {
        iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x84);
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        piVar2 = (int *)(iVar1 + ((int)uVar6 >> 1));
        pcVar4 = pcVar5;
        if ((uVar6 & 1) != 0) {
          pcVar4 = *(code **)(pcVar5 + *piVar2);
        }
        (*pcVar4)(piVar2,param_3);
      }
    }
    iVar3 = iVar3 + 1;
    param_2 = param_2 >> 1;
  } while (iVar3 < 0x10);
  return;
}
