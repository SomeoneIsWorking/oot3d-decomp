// OoT3D decomp @ 003e3020  name=FUN_003e3020  size=740

void FUN_003e3020(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

  fVar1 = DAT_003e3368;
  uVar4 = *(uint *)(DAT_003e3364 + param_2);
  if ((*(short *)(param_1 + 0x452) == 0) &&
     (((*(byte *)(param_1 + 0x486) & 2) == 0 || (*(uint *)(param_1 + 0x480) != uVar4)))) {
    bVar6 = (*(byte *)(param_1 + 0x4dd) & 2) == 0;
    if (bVar6) {
      uVar4 = (uint)*(byte *)(param_1 + 0x485);
    }
    if (bVar6 && (uVar4 & 2) == 0) {
      if (10 < *(byte *)(param_1 + 0x464)) {
        *(byte *)(param_1 + 0x464) = *(byte *)(param_1 + 0x464) - 10;
        return;
      }
      *(undefined1 *)(param_1 + 0x464) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      if (*(int *)(param_1 + 0x1a4) < 0) {
        *(undefined2 *)(param_1 + 0x45e) = 0;
      }
      fVar3 = DAT_003e3384;
      *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x30);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x1b0);
      fVar7 = *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x1a8);
      *(float *)(param_1 + 0x6c) = fVar7;
      uVar2 = DAT_003e3394;
      fVar8 = DAT_003e3388;
      if (((uint)fVar7 <= (uint)fVar3) && (fVar8 = fVar7, DAT_003e338c < (int)fVar7)) {
        fVar8 = DAT_003e3390;
      }
      *(float *)(param_1 + 0x6c) = fVar8;
      FUN_0036e168(fVar1,uVar2,uVar2,fVar1,param_1 + 0x6c);
      if (*(float *)(param_1 + 0x6c) != fVar1) {
        FUN_00375bcc(param_1,DAT_003e3398);
      }
      *(float *)(param_1 + 0x1ac) = fVar1;
      *(float *)(param_1 + 0x1a8) = fVar1;
      return;
    }
  }
  if ((*(byte *)(param_1 + 0x4dd) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x485) & 2) != 0) {
      local_28 = VectorSignedToFloat((int)*(short *)(param_1 + 0x49a),(byte)(in_fpscr >> 0x15) & 3);
      local_24 = VectorSignedToFloat((int)*(short *)(param_1 + 0x49c),(byte)(in_fpscr >> 0x15) & 3);
      local_20 = VectorSignedToFloat((int)*(short *)(param_1 + 0x49e),(byte)(in_fpscr >> 0x15) & 3);
      FUN_003741e4(param_2,**(undefined4 **)(param_1 + 0x4b0),1,&local_28,0);
    }
  }
  else {
    puVar5 = *(undefined4 **)(param_1 + 0x508);
    local_28 = VectorSignedToFloat((int)*(short *)(param_1 + 0x4f2),(byte)(in_fpscr >> 0x15) & 3);
    local_24 = VectorSignedToFloat((int)*(short *)(param_1 + 0x4f4),(byte)(in_fpscr >> 0x15) & 3);
    local_20 = VectorSignedToFloat((int)*(short *)(param_1 + 0x4f6),(byte)(in_fpscr >> 0x15) & 3);
    FUN_003741e4(param_2,*puVar5,1,&local_28,0);
    FUN_00342af8(param_2,&local_28,param_1 + 0x28,*(undefined1 *)((int)puVar5 + 0x15),1);
  }
  *(byte *)(param_1 + 0x4dd) = *(byte *)(param_1 + 0x4dd) & 0x7d;
  *(byte *)(param_1 + 0x485) = *(byte *)(param_1 + 0x485) & 0xfd;
  if (*(char *)(param_1 + 0x464) == '\0') {
    FUN_00375bcc(param_1,DAT_003e336c);
    FUN_00375bcc(param_1,DAT_003e3370);
    FUN_00375ed8(param_1,0x400000,0xff,0,8);
  }
  if (0xef < *(byte *)(param_1 + 0x464)) {
    *(float *)(param_1 + 0xc4) = fVar1;
    *(undefined2 *)(param_1 + 0x456) = 300;
    *(undefined1 *)(param_1 + 0x464) = 0xff;
    uVar2 = DAT_003e3374;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    FUN_003660fc(uVar2,param_1 + 0x1bc,0);
    *(float *)(param_1 + 0x6c) = fVar1;
    *(undefined2 *)(param_1 + 0x452) = 3;
    *(undefined4 *)(param_1 + 0x448) = 10;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    *(undefined4 *)(param_1 + 0x44c) = DAT_003e3378;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
