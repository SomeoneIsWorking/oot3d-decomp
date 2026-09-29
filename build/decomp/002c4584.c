// OoT3D decomp @ 002c4584  name=FUN_002c4584  size=128

void FUN_002c4584(undefined4 param_1,int param_2,uint param_3,code *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;

  iVar2 = 0;
  do {
    if (param_3 == 0) {
      return;
    }
    if ((param_3 & 1) != 0) {
      if (iVar2 < 0x10) {
        iVar1 = *(int *)(param_2 + iVar2 * 4 + 0x84);
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        pcVar3 = param_4;
        if ((param_5 & 1) != 0) {
          pcVar3 = *(code **)(param_4 + *(int *)(iVar1 + ((int)param_5 >> 1)));
        }
        (*pcVar3)(param_1);
      }
    }
    iVar2 = iVar2 + 1;
    param_3 = param_3 >> 1;
  } while (iVar2 < 0x10);
  return;
}
