// OoT3D decomp @ 002ba3b8  name=FUN_002ba3b8  size=144

int FUN_002ba3b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = DAT_002ba44c;
  if (*(short *)(*DAT_002ba450 + 0x110) < 3) {
    fVar4 = ABS(*(float *)(param_2 + 0x70));
    fVar2 = fVar4;
    if (DAT_002ba454 < (int)fVar4) {
      fVar2 = DAT_002ba458;
    }
    if (DAT_002ba454 < (int)fVar4) {
      fVar3 = DAT_002ba44c - *(float *)((int)fVar2 + 0x88);
    }
  }
  iVar1 = FUN_002bb780(*(undefined4 *)(*(int *)(DAT_002ba448 + param_2) + 0x38),fVar3,
                       param_5 + 0xa98,param_1 + 8,param_3,param_4,param_1,param_1 + 4,param_2);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}

