// OoT3D decomp @ 0035f324  name=FUN_0035f324  size=696

undefined4 FUN_0035f324(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];

  uVar2 = 1;
  iVar3 = param_2 + 0xa98;
  if ((*(byte *)(param_1 + 0x6b6) & 2) != 0) {
    uVar2 = 0;
    *(byte *)(param_1 + 0x6b5) = *(byte *)(param_1 + 0x6b5) & 0xfd;
    goto LAB_0035f4d0;
  }
  if ((*(uint *)(param_2 + 0xf8) & 3) == 0) {
    iVar1 = FUN_00369f9c(iVar3,param_1 + 0x28,param_1 + 0x7e8,&local_30,auStack_20,1,0,0,1,
                         auStack_24);
    if (iVar1 != 0) goto LAB_0035f3bc;
  }
  else {
LAB_0035f3bc:
    if ((*(uint *)(param_2 + 0xf8) & 3) == 1) {
      iVar1 = FUN_00369f9c(iVar3,param_1 + 0x28,param_1 + 0x7f4,&local_30,auStack_20,1,0,0,1,
                           auStack_24);
      if (iVar1 != 0) goto LAB_0035f4cc;
    }
    if ((*(uint *)(param_2 + 0xf8) & 3) == 2) {
      iVar1 = FUN_00369f9c(iVar3,param_1 + 0x28,param_1 + 0x800,&local_30,auStack_20,1,0,0,1,
                           auStack_24);
      if (iVar1 == 0) goto LAB_0035f4cc;
    }
    if ((~*(uint *)(param_2 + 0xf8) & 3) != 0) goto LAB_0035f4d0;
    iVar1 = FUN_00369f9c(iVar3,param_1 + 0x28,param_1 + 0x80c,&local_30,auStack_20,1,0,0,1,
                         auStack_24);
    if (iVar1 == 0) goto LAB_0035f4d0;
  }
LAB_0035f4cc:
  uVar2 = 0;
LAB_0035f4d0:
  iVar3 = FUN_00369f9c(iVar3,param_1 + 0x28,param_1 + 0x818,&local_30,param_1 + 0x7c4,1,0,0,1,
                       auStack_24);
  if (iVar3 != 0) {
    uVar7 = VectorSignedToFloat((int)*(short *)(*(int *)(param_1 + 0x7c4) + 0xe),
                                (byte)(in_fpscr >> 0x15) & 3);
    uVar4 = VectorSignedToFloat((int)*(short *)(*(int *)(param_1 + 0x7c4) + 10),
                                (byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)FUN_003696ec(uVar4,uVar7);
    *(short *)(param_1 + 0x82) = (short)(int)(fVar5 * DAT_0035f5dc);
    *(undefined4 *)(param_1 + 0x28) = local_30;
    *(undefined4 *)(param_1 + 0x2c) = uStack_2c;
    *(undefined4 *)(param_1 + 0x30) = uStack_28;
    fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
    fVar5 = DAT_0035f5e0;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar6 * DAT_0035f5e0;
    fVar6 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar6 * fVar5;
    *(undefined4 *)(param_1 + 0x7c8) = local_30;
    *(undefined4 *)(param_1 + 0x7cc) = uStack_2c;
    *(undefined4 *)(param_1 + 2000) = uStack_28;
    fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
    *(float *)(param_1 + 0x7c8) = fVar5 + *(float *)(param_1 + 0x7c8);
    fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    *(float *)(param_1 + 2000) = fVar5 + *(float *)(param_1 + 2000);
  }
  return uVar2;
}
