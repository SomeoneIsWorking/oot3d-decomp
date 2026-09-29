// OoT3D decomp @ 002ea294  name=FUN_002ea294  size=72

void FUN_002ea294(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar1 = *param_2;
  bVar4 = iVar1 == DAT_002ea2dc;
  if (bVar4) {
    iVar1 = param_2[2];
  }
  if (bVar4 && iVar1 == 0x2000000) {
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    iVar3 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    param_1[3] = iVar3;
    iVar1 = param_2[5];
    iVar2 = param_2[6];
    iVar3 = param_2[7];
    param_1[4] = param_2[4];
    param_1[5] = iVar1;
    param_1[6] = iVar2;
    param_1[7] = iVar3;
    iVar1 = param_2[9];
    iVar2 = param_2[10];
    iVar3 = param_2[0xb];
    param_1[8] = param_2[8];
    param_1[9] = iVar1;
    param_1[10] = iVar2;
    param_1[0xb] = iVar3;
    iVar1 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = iVar1;
    return;
  }
  return;
}
