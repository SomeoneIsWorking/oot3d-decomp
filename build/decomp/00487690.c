// OoT3D decomp @ 00487690  name=FUN_00487690  size=140

void FUN_00487690(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;

  iVar3 = 0;
  pcVar5 = *(code **)(DAT_0048771c + 0x38);
  uVar6 = *(uint *)(DAT_0048771c + 0x3c);
  do {
    if (param_3 == 0) {
      return;
    }
    if ((param_3 & 1) != 0) {
      if (iVar3 < 0x10) {
        iVar1 = *(int *)(param_2 + iVar3 * 4 + 0x84);
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
        (*pcVar4)(param_1,piVar2,param_4);
      }
    }
    iVar3 = iVar3 + 1;
    param_3 = param_3 >> 1;
  } while (iVar3 < 0x10);
  return;
}
