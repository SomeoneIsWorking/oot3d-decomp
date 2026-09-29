// OoT3D decomp @ 001b0bc8  name=FUN_001b0bc8  size=656

void FUN_001b0bc8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  uVar1 = DAT_001b0e5c;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
  iVar2 = *(short *)(param_1 + 0x1c) + -1;
  *(int *)(DAT_001b0e58 + iVar2 * 4 + 4) = param_1;
  FUN_003510b0(param_1,uVar1);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,2,param_1 + 0x228,param_1 + 0x638,0x14);
  FUN_00353c9c(param_1,param_2,param_1 + 0xa48,1,3,param_1 + 0xacc,param_1 + 0xb68,3);
  FUN_0035c358(param_1 + 0xc80,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  uVar1 = FUN_0034faa8(param_2,param_2 + 0xa70);
  *(undefined4 *)(param_1 + 0xc08) = uVar1;
  uVar6 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x10),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar5 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0xc),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar1 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 8),(byte)(in_fpscr >> 0x15) & 3)
  ;
  FUN_003591e4(uVar1,uVar5,uVar6,param_1 + 0xc0c,0xff,0xff,0xff,0xffffffff,0);
  fVar3 = DAT_001b0e74;
  uVar1 = DAT_001b0e6c;
  if ((*(ushort *)(DAT_001b0e60 + 6) &
      *(ushort *)(DAT_001b0e68 + (uint)*(byte *)(DAT_001b0e64 + iVar2) * 2)) != 0) {
    uVar1 = DAT_001b0e70;
  }
  *(undefined4 *)(param_1 + 0xc5c) = uVar1;
  FUN_0037572c(*(float *)(param_1 + 0xc5c) * fVar3,param_1);
  *(undefined4 *)(param_1 + 0x74) = DAT_001b0e78;
  FUN_0037322c(DAT_001b0e7c,param_1);
  uVar1 = DAT_001b0e80;
  *(undefined1 *)(param_1 + 0xc34) = 1;
  fVar3 = (float)FUN_00371e50(uVar1);
  *(int *)(param_1 + 0xc2c) = (int)(short)(int)(fVar3 + DAT_001b0e84);
  *(undefined4 *)(param_1 + 0xc30) = DAT_001b0e88;
  *(undefined1 *)(param_1 + 0xc36) = 0;
  *(undefined1 *)(param_1 + 0xc37) = 0;
  *(undefined1 *)(param_1 + 0xc35) = 0;
  uVar1 = DAT_001b0e8c;
  *(undefined4 *)(param_1 + 0xc48) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc4c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0xc50) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0xc04) = uVar1;
  *(undefined1 *)(param_1 + 0xc38) = 0;
  *(undefined1 *)(param_1 + 0xc3a) = 0;
  *(undefined1 *)(param_1 + 0xc39) = 0;
  *(undefined1 *)(param_1 + 0xc3f) = 0;
  *(undefined1 *)(param_1 + 0xc3e) = 7;
  *(undefined4 *)(param_1 + 0xc60) = 0;
  FUN_0034251c(param_1);
  uVar5 = DAT_001b0e98;
  uVar1 = DAT_001b0e94;
  if (*(short *)(param_1 + 0x1c) == 4) {
    *(undefined4 *)(param_1 + 0x140) = DAT_001b0e90;
    uVar1 = DAT_001b0e94;
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  *(undefined1 *)(param_1 + 0xc64) = 0;
  fVar4 = (float)FUN_00371e50(uVar5);
  fVar3 = DAT_001b0e9c;
  *(short *)(param_1 + 0xc66) = (short)((int)fVar4 << 0xc);
  *(undefined4 *)(param_1 + 0xc68) = *(undefined4 *)(param_1 + 0xc48);
  *(undefined4 *)(param_1 + 0xc74) = *(undefined4 *)(param_1 + 0xc48);
  fVar3 = *(float *)(param_1 + 0xc4c) + fVar3;
  *(float *)(param_1 + 0xc6c) = fVar3;
  *(float *)(param_1 + 0xc78) = fVar3;
  *(undefined4 *)(param_1 + 0xc70) = *(undefined4 *)(param_1 + 0xc50);
  *(undefined4 *)(param_1 + 0xc7c) = *(undefined4 *)(param_1 + 0xc50);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
