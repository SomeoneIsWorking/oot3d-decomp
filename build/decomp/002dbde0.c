// OoT3D decomp @ 002dbde0  name=FUN_002dbde0  size=108

void FUN_002dbde0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *local_10;

  local_10 = param_4;
  while (iVar1 = FUN_002d2fc4(param_1 + 0xb4,&local_10), iVar1 != 0) {
    *(int *)(param_1 + 0x174) = local_10[2];
    piVar2 = local_10;
    if (local_10 != (int *)0x0) {
      do {
        piVar3 = piVar2;
        piVar2 = (int *)*piVar3;
      } while (piVar2 != (int *)0x0);
      iVar1 = piVar3[3];
      *(int *)(param_1 + 0x184) = iVar1;
      *(undefined1 *)(param_1 + 0x188) = 0;
      if (*(int *)(param_1 + 0x180) == iVar1) {
        *(undefined4 *)(param_1 + 0x184) = 0;
        *(undefined4 *)(param_1 + 0x180) = 0;
      }
    }
  }
  return;
}
