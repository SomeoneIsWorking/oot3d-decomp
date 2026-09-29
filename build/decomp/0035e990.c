// OoT3D decomp @ 0035e990  name=FUN_0035e990  size=108

void FUN_0035e990(int param_1,undefined4 *param_2,undefined4 *param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;

  iVar3 = 0;
  if (*(char *)(param_1 + 0x74) != '\0') {
    do {
      if (*param_4 != '\0') {
        uVar1 = param_3[1];
        uVar2 = param_3[2];
        uVar4 = param_3[3];
        *param_2 = *param_3;
        param_2[1] = uVar1;
        param_2[2] = uVar2;
        param_2[3] = uVar4;
        uVar1 = param_3[5];
        uVar2 = param_3[6];
        uVar4 = param_3[7];
        param_2[4] = param_3[4];
        param_2[5] = uVar1;
        param_2[6] = uVar2;
        param_2[7] = uVar4;
        uVar1 = param_3[9];
        uVar2 = param_3[10];
        uVar4 = param_3[0xb];
        param_2[8] = param_3[8];
        param_2[9] = uVar1;
        param_2[10] = uVar2;
        param_2[0xb] = uVar4;
        param_2[0xc] = param_3[0xc];
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 0xd;
      param_3 = param_3 + 0xd;
      param_4 = param_4 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x74));
  }
  return;
}
