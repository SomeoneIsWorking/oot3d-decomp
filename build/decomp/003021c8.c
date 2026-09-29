// OoT3D decomp @ 003021c8  name=FUN_003021c8  size=188

undefined4 FUN_003021c8(int *param_1,int *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;

  *param_2 = param_1[1] - *param_1 >> 1;
  param_2[1] = *param_1;
  iVar4 = param_1[2];
  uVar2 = 0;
  *param_1 = iVar4;
  while( true ) {
    sVar1 = *(short *)(iVar4 + uVar2 * 2);
    if (sVar1 == 0x2f) {
      if (uVar2 < 0x100) {
        iVar4 = iVar4 + uVar2 * 2;
        param_1[1] = iVar4;
        psVar3 = (short *)(iVar4 + 2);
        param_1[2] = (int)psVar3;
        while (*psVar3 == 0x2f) {
          psVar3 = psVar3 + 1;
          param_1[2] = (int)psVar3;
        }
        if (*psVar3 == 0) {
          *(undefined1 *)(param_1 + 3) = 1;
        }
        return 0;
      }
      return DAT_00302284;
    }
    if (sVar1 == 0) break;
    uVar2 = uVar2 + 1;
  }
  iVar4 = iVar4 + uVar2 * 2;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[2] = iVar4;
  param_1[1] = iVar4;
  return 0;
}
