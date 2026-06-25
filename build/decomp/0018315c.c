// OoT3D decomp @ 0018315c  name=FUN_0018315c  size=188

void FUN_0018315c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0xb00) & 8) == 0) {
    FUN_0034b808(param_1,param_2);
  }
  FUN_00370734(param_1 + 0x1a4);
  iVar1 = FUN_00372d64(param_2 + 0x208c,uRam00183218,5);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xb00) = *(uint *)(param_1 + 0xb00) & 0xfffffff7 | 0x10;
    FUN_0034b50c(param_1,2,param_1 + 0xab8);
    *(undefined4 *)(param_1 + 0xa48) = uRam0018321c;
  }
  else if ((((*(uint *)(param_1 + 0xb00) & 8) == 0) && (iVar2 = func_0x00117e44(iVar1), iVar2 != 0))
          && (*(short *)(iRam00183220 + iVar1) == 0)) {
    *(uint *)(param_1 + 0xb00) = *(uint *)(param_1 + 0xb00) | 8;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff6;
    return;
  }
  return;
}

