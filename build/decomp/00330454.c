// OoT3D decomp @ 00330454  name=FUN_00330454  size=240

bool FUN_00330454(int param_1,int param_2,short *param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = false;
  iVar3 = FUN_002c0920(param_2);
  if ((((iVar3 != 0) && (uVar2 = *(ushort *)(param_1 + param_2 * 2 + 0x156c), (uVar2 & 2) == 0)) &&
      ((uVar2 & 1) != 0)) && (iVar3 = FUN_00359690(param_1,param_2), iVar3 != 0)) {
    bVar4 = (*(uint *)(iVar3 + 0x1b4) & 1) != 0;
    if (bVar4) {
      FUN_0049f974(param_1,param_2,param_3);
    }
    if ((*(uint *)(iVar3 + 0x1b4) & 2) != 0) {
      iVar3 = FUN_002c0920(param_2);
      if (iVar3 != 0) {
        param_1 = param_1 + param_2 * 0x6c;
        sVar1 = *(short *)(param_1 + 0x96) - *(short *)(param_1 + 0x76);
        if (*param_3 == 0) {
          param_3[0x1110] = param_3[0x1110] + sVar1;
        }
        param_3[0x5f] = param_3[0x5f] + sVar1;
        param_3[0x1b] = sVar1 + param_3[0x1b];
      }
      bVar4 = true;
    }
  }
  return bVar4;
}

