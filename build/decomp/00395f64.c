// OoT3D decomp @ 00395f64  name=FUN_00395f64  size=800

void FUN_00395f64(int param_1,int param_2)

{
  char *pcVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;

  pcVar1 = DAT_003964dc;
  iVar6 = *(int *)(DAT_003964d8 + param_2);
  if (*(short *)(param_1 + 0x11a) == 0) {
    *(short *)(DAT_003964dc + 0x16) = *(short *)(DAT_003964dc + 0x16) + 1;
    bVar8 = *(short *)(param_1 + 0xf96) != 0;
    uVar3 = 0;
    if (bVar8) {
      uVar3 = *(uint *)(param_1 + 0x11c);
    }
    if (bVar8 && (uVar3 & 0x400000) != 0) {
      FUN_00375ed8(param_1,0,0xff,0,0xa0);
      *(undefined2 *)(param_1 + 0x11a) = *(undefined2 *)(param_1 + 0xf96);
    }
    else {
      *(undefined4 *)(param_1 + 0x10b0) = 0x10;
    }
  }
  if ((*(byte *)(param_1 + 0x10a1) & 2) != 0) {
    *(byte *)(param_1 + 0x10a1) = *(byte *)(param_1 + 0x10a1) & 0xfd;
    if (**(short **)(param_1 + 0x1098) == 0x32) {
      *(ushort *)(pcVar1 + 0x16) = *(ushort *)(pcVar1 + 0x16) & 0xfe00;
      FUN_00375ed8(param_1,0,0xff,0,0xa0);
      *(undefined4 *)(param_1 + 0x10b0) = DAT_003964e0;
      local_44 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x10b6),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_3c = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x10ba),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_40 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x10b8),
                                            (byte)(in_fpscr >> 0x15) & 3);
      FUN_00365560(param_2,**(undefined4 **)(param_1 + 0x10cc),0,&local_44,
                   (int)*(short *)(pcVar1 + 0xe));
    }
    else {
      *pcVar1 = *pcVar1 + '\x01';
      if ((*(short *)(param_1 + 0x11a) != 0) && ((*(uint *)(param_1 + 0x11c) & 0x400000) == 0)) {
        sVar2 = *(short *)(param_1 + 0x11a) + -5;
        *(short *)(param_1 + 0xf96) = sVar2;
        if ((sVar2 < 0) || (0xf0 < sVar2)) {
          *(undefined2 *)(param_1 + 0xf96) = 0;
        }
      }
      FUN_00375ed8(param_1,0x400000,0xff,0,0xc);
    }
    FUN_00375bcc(param_1,DAT_003964e4);
  }
  if ((*(byte *)(param_1 + 0x10a0) & 2) != 0) {
    *(byte *)(param_1 + 0x10a0) = *(byte *)(param_1 + 0x10a0) & 0xfd;
    *(ushort *)(pcVar1 + 0x16) = *(short *)(pcVar1 + 0x16) + 0x18U & 0xfff0;
    if (*(int *)(param_1 + 0x1094) == iVar6) {
      FUN_00374bb8(DAT_003964e8,DAT_003964e8,param_2,param_1,(int)*(short *)(param_1 + 0x92));
      FUN_00375bcc(iVar6,DAT_003964ec);
    }
  }
  uVar7 = DAT_003964f4;
  uVar4 = DAT_003964f0;
  uVar3 = (uint)*(ushort *)(DAT_003964dc + 0x16);
  if (10 < uVar3) {
    bVar8 = (*(ushort *)(DAT_003964dc + 0x16) & 7) == 0;
    if (bVar8) {
      uVar3 = *(uint *)(param_1 + 0x6c);
    }
    if (bVar8 && uVar3 == 0x3f800000) {
      sVar2 = 0;
      local_40 = DAT_003964f8 + *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x58) +
                 *(float *)(param_1 + 0x2c);
      local_44 = *(float *)(param_1 + 0x28) + DAT_003964fc;
      local_3c = *(float *)(param_1 + 0x30) + DAT_00396500;
      local_38 = *(undefined4 *)(DAT_003964dc + 0x18);
      puVar5 = DAT_00396504;
      do {
        if (*(char *)(puVar5 + 9) == '\0') {
          *(undefined1 *)(puVar5 + 9) = 4;
          puVar5[0x15] = param_1;
          *puVar5 = uVar7;
          puVar5[1] = uVar4;
          puVar5[2] = uVar7;
          uVar4 = DAT_00396508[1];
          uVar7 = DAT_00396508[2];
          puVar5[6] = *DAT_00396508;
          puVar5[7] = uVar4;
          puVar5[8] = uVar7;
          puVar5[3] = puVar5[6];
          puVar5[4] = puVar5[7];
          puVar5[5] = puVar5[8];
          *(undefined2 *)(puVar5 + 10) = 0;
          puVar5[0x12] = local_44;
          puVar5[0x14] = local_3c;
          puVar5[0x13] = local_40;
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        sVar2 = sVar2 + 1;
        puVar5 = puVar5 + 0x17;
      } while (sVar2 < 200);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
