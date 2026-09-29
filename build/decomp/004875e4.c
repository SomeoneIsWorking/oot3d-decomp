// OoT3D decomp @ 004875e4  name=FUN_004875e4  size=144

undefined4 FUN_004875e4(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  uint uVar7;

  uVar3 = 0;
  if (*(int *)(param_1 + param_3 * 4 + 0xe8) != 0) {
    iVar4 = 0;
    pcVar6 = *(code **)(DAT_00487674 + 0x58);
    uVar7 = *(uint *)(DAT_00487674 + 0x5c);
    do {
      if (param_2 == 0) break;
      if ((param_2 & 1) != 0) {
        if (iVar4 < 0x10) {
          iVar1 = *(int *)(param_1 + iVar4 * 4 + 0x84);
        }
        else {
          iVar1 = 0;
        }
        if (iVar1 != 0) {
          piVar2 = (int *)(iVar1 + ((int)uVar7 >> 1));
          pcVar5 = pcVar6;
          if ((uVar7 & 1) != 0) {
            pcVar5 = *(code **)(pcVar6 + *piVar2);
          }
          (*pcVar5)(piVar2,param_3);
        }
      }
      iVar4 = iVar4 + 1;
      param_2 = param_2 >> 1;
    } while (iVar4 < 0x10);
    uVar3 = 1;
  }
  return uVar3;
}
