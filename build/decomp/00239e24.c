// OoT3D decomp @ 00239e24  name=FUN_00239e24  size=380

void FUN_00239e24(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  short *psVar4;
  short sVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  psVar4 = *(short **)(DAT_00239fa0 + param_2);
  do {
    if (psVar4 == (short *)0x0) {
      sVar5 = 0;
LAB_00239ea8:
      sVar3 = *(short *)(param_1 + 0x22a) + 900;
      *(short *)(param_1 + 0x22a) = sVar3;
      if (0x5fff < sVar3) {
        *(undefined2 *)(param_1 + 0x22a) = 0x5fff;
      }
      sVar3 = *(short *)(param_1 + 0x22c) + 600;
      *(short *)(param_1 + 0x22c) = sVar3;
      if (0x4000 < sVar3) {
        *(undefined2 *)(param_1 + 0x22c) = 0x4000;
      }
      fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x22a));
      *(float *)(param_1 + 0x58) = fVar6 * DAT_00239fa8;
      fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x22c));
      uVar2 = DAT_00239fb4;
      uVar1 = DAT_00239fb0;
      fVar6 = fVar6 * DAT_00239fac;
      *(float *)(param_1 + 0x5c) = fVar6;
      *(float *)(param_1 + 0x54) = fVar6;
      FUN_003705a0(uVar2,uVar1,param_1 + 0x25c);
      FUN_003705a0(uVar2,uVar1,param_1 + 0x260);
      FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x16),100);
      FUN_0036d15c(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
      sVar3 = *(short *)(param_1 + 0x228);
      if (*(short *)(param_1 + 0x228) < 1) {
        sVar3 = sVar5;
      }
      if (sVar3 == 0) {
        *(undefined2 *)(param_1 + 0x22e) = 0;
        uVar1 = DAT_00239fb8;
        *(undefined2 *)(param_1 + 0x22c) = 0;
        *(undefined2 *)(param_1 + 0x22a) = 0;
        *(undefined4 *)(param_1 + 600) = uVar2;
        *(undefined4 *)(param_1 + 0x1bc) = uVar1;
        *(byte *)(param_1 + 0x26b) = *(byte *)(param_1 + 0x26b) & 0xf0 | 4;
      }
      return;
    }
    if ((*psVar4 == 0x14) &&
       (fVar8 = *(float *)(psVar4 + 0x14) - *(float *)(param_1 + 0x28),
       fVar6 = *(float *)(psVar4 + 0x16) - *(float *)(param_1 + 0x2c),
       fVar7 = *(float *)(psVar4 + 0x18) - *(float *)(param_1 + 0x30),
       (int)(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) < DAT_00239fa4)) {
      sVar5 = 1;
      goto LAB_00239ea8;
    }
    psVar4 = *(short **)(psVar4 + 0x98);
  } while( true );
}
