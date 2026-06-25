// OoT3D decomp @ 002c1ec8  name=FUN_002c1ec8  size=372

undefined4 FUN_002c1ec8(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if ((*(int *)(DAT_002c203c + param_2) == 6) && (*(short *)(param_1 + 0x104) != 0x4c)) {
    uStack_2c = *DAT_002c2040;
    uStack_28 = DAT_002c2040[1];
    uStack_24 = DAT_002c2040[2];
    uStack_20 = DAT_002c2040[3];
    iVar2 = param_2 + *(short *)(DAT_002c2040 + -0x1b) * 0xc;
    local_44 = *(undefined4 *)(iVar2 + 0x2340);
    uStack_40 = *(undefined4 *)(iVar2 + 0x2344);
    uStack_3c = *(undefined4 *)(iVar2 + 0x2348);
    fVar3 = (float)FUN_003759d0();
    fVar1 = DAT_002c2048;
    fVar4 = DAT_002c2044;
    local_38 = (fVar3 - DAT_002c2044) * DAT_002c2048;
    fVar3 = (float)FUN_003759d0();
    iVar2 = DAT_002c204c;
    local_34 = *(float *)(DAT_002c204c + 0xb0) + fVar3 * DAT_002c2050;
    fVar3 = (float)FUN_003759d0();
    local_38 = local_38 - *(float *)(param_2 + 0x60) * *(float *)(iVar2 + 0xac);
    local_30 = (fVar3 - fVar4) * fVar1 - *(float *)(param_2 + 0x68) * *(float *)(iVar2 + 0xac);
    fVar4 = (float)FUN_003759d0();
    uVar5 = (uint)(fVar4 * DAT_002c2054);
    iVar2 = (int)((longlong)(int)uVar5 * (longlong)DAT_002c2058 + ((ulonglong)uVar5 << 0x20) >> 0x20
                 );
    FUN_00365f98(param_1,&local_44,&local_38,&local_44,0xffffff9c,0x240,0x28,3,0,
                 (int)*(short *)((int)&uStack_2c +
                                (((iVar2 >> 2) - (iVar2 >> 0x1f)) * -7 + uVar5) * 2),0,0,0x50,
                 0xffffffff,2,0xc);
    return 1;
  }
  return 0;
}

