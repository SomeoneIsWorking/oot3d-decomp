// OoT3D decomp @ 0021faec  name=FUN_0021faec  size=500

undefined4 FUN_0021faec(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;

  iVar3 = FUN_0036b4ec(param_1 + 0x1764);
  if (iVar3 == 0) {
    iVar3 = FUN_0036b1e0(DAT_0021fce4,param_1 + 0x1764);
    if (iVar3 != 0) {
      fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      fVar1 = DAT_0021fce8;
      fVar8 = *(float *)(param_1 + 0x28);
      fVar6 = fVar6 * DAT_0021fce8;
      fVar7 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      sVar2 = *(short *)(param_1 + 0xbe);
      if (*(int *)(param_1 + 0x16f8) != 0) {
        sVar2 = sVar2 + 14000;
      }
      iVar3 = z_actor_003738d0(fVar8 + fVar6,*(float *)(param_1 + 0x2c) + DAT_0021fcec,
                               *(float *)(param_1 + 0x30) + fVar7 * fVar1,param_2 + 0x208c,param_2,
                               0x32,(int)*(short *)(param_1 + 0x48),(int)sVar2,0,
                               (*(uint *)(param_1 + 0x1710) & 0x20000) >> 0x11,1);
      *(int *)(param_1 + 0x171c) = iVar3;
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x228) = *(undefined4 *)(param_1 + 0x16f8);
        *(undefined1 *)(iVar3 + 0x26c) = 0x1e;
        *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x2000000;
        iVar3 = FUN_003518cc(param_1);
        if (iVar3 == 0) {
          *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x20000;
          if ((*(byte *)(param_1 + 0x2a6) & 0x80) == 0) {
            uVar4 = *(ushort *)(param_1 + 0x90) & 0x200;
            bVar5 = (*(ushort *)(param_1 + 0x90) & 0x200) != 0;
            if (bVar5) {
              uVar4 = *(uint *)(DAT_0021fcf0 + 0x44);
            }
            if (bVar5 && (int)uVar4 < 0x2000) {
              sVar2 = *(short *)(param_1 + 0x82) + -0x8000;
              *(short *)(param_1 + 0xbe) = sVar2;
              *(short *)(param_1 + 0x2220) = sVar2;
            }
          }
          *(undefined2 *)(param_1 + 0x2222) = *(undefined2 *)(param_1 + 0xbe);
        }
        fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0021fcf4 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3);
        *(char *)(DAT_0021fd00 + param_1) = (char)(int)(DAT_0021fcf8 / fVar6 + DAT_0021fcfc);
        FUN_0036f59c(param_1,DAT_0021fd04);
        if (*(char *)(param_1 + 2) == '\x02') {
          FUN_0036f59c(param_1,DAT_0021fd08 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
        }
        else {
          FUN_0036aeb4(param_1 + 0x28);
        }
      }
    }
  }
  else {
    FUN_0035d27c(param_1,DAT_0021fce0);
    *(undefined2 *)(param_1 + 0x2218) = 0;
  }
  return 1;
}
