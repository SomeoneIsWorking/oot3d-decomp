// OoT3D decomp @ 0030c074  name=FUN_0030c074  size=104

void FUN_0030c074(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;

  do {
    piVar1 = (int *)FUN_002ce040(param_1 + 0xb4);
    *(int *)(param_1 + 0x174) = piVar1[2];
    piVar4 = piVar1;
    if (piVar1 != (int *)0x0) {
      do {
        piVar2 = piVar4;
        piVar4 = (int *)*piVar2;
      } while (piVar4 != (int *)0x0);
      iVar3 = piVar2[3];
      *(int *)(param_1 + 0x184) = iVar3;
      *(undefined1 *)(param_1 + 0x188) = 0;
      if (*(int *)(param_1 + 0x180) == iVar3) {
        *(undefined4 *)(param_1 + 0x184) = 0;
        *(undefined4 *)(param_1 + 0x180) = 0;
      }
    }
  } while (piVar1[2] != param_2);
  return;
}
