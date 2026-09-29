// OoT3D decomp @ 004874f8  name=FUN_004874f8  size=128

void FUN_004874f8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;

  iVar4 = 0;
  pcVar5 = *(code **)(DAT_00487578 + 8);
  uVar6 = *(uint *)(DAT_00487578 + 0xc);
  do {
    if (param_2 == 0) {
      return;
    }
    if ((param_2 & 1) != 0) {
      if (iVar4 < 0x10) {
        iVar1 = *(int *)(param_1 + iVar4 * 4 + 0x84);
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        piVar2 = (int *)(iVar1 + ((int)uVar6 >> 1));
        pcVar3 = pcVar5;
        if ((uVar6 & 1) != 0) {
          pcVar3 = *(code **)(pcVar5 + *piVar2);
        }
        (*pcVar3)(piVar2,param_3,param_4);
      }
    }
    iVar4 = iVar4 + 1;
    param_2 = param_2 >> 1;
  } while (iVar4 < 0x10);
  return;
}
