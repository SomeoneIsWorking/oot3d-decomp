// OoT3D decomp @ 001c4e54  name=FUN_001c4e54  size=684

void FUN_001c4e54(int param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;

  fVar8 = DAT_001c5108;
  fVar4 = DAT_001c5104;
  piVar3 = DAT_001c5100;
  cVar2 = *(char *)(param_1 + 0xc4a);
  if (cVar2 == '\0') {
    FUN_003717ac(param_1 + 0x1a4,DAT_001c510c,5);
    fVar8 = DAT_001c5118;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x5b0;
    *(undefined2 *)(param_1 + 0xcaa) = 1;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(short *)(param_1 + 0xef6) =
         (short)(int)(((*(float *)(param_1 + 0x1ec) + fVar8) * DAT_001c511c) / fVar7 + fVar4);
    *(undefined1 *)(param_1 + 0xc4b) = 2;
    *(undefined1 *)(param_1 + 0xc44) = 0;
    *(char *)(param_1 + 0xc4a) = *(char *)(param_1 + 0xc4a) + '\x01';
    FUN_00340478(0x28,8);
    FUN_00371808(param_2,DAT_001c5120,0xffffff9d,param_1,0);
    return;
  }
  if (cVar2 == '\x01') {
    if (*(short *)(param_1 + 0xef6) != 0) {
      sVar1 = *(short *)(param_1 + 0xef6) + -1;
      iVar5 = (int)sVar1;
      *(short *)(param_1 + 0xef6) = sVar1;
      if (iVar5 != 0) {
        iVar6 = (int)*(short *)(*piVar3 + 0x110);
        fVar8 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
        if (((int)(DAT_001c5124 / fVar8 + fVar4) != iVar5) &&
           (fVar8 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3),
           (int)(DAT_001c5128 / fVar8 + fVar4) != iVar5)) {
          return;
        }
        FUN_0036ae48(*(undefined4 *)(param_2 + *(short *)(DAT_001c512c + param_2) * 4 + 0xa54));
        FUN_0037547c(DAT_001c5138,0,4,DAT_001c5134,DAT_001c5134,DAT_001c5130);
        return;
      }
    }
    FUN_00371af0(DAT_001c5140,DAT_001c513c,0x3c);
    FUN_003717ac(param_1 + 0x1a4,DAT_001c510c,6);
    FUN_0036be34(param_2,DAT_001c5144);
    *(undefined1 *)(param_1 + 0xc4b) = 3;
    *(char *)(param_1 + 0xc4a) = *(char *)(param_1 + 0xc4a) + '\x01';
    FUN_00340478(0x7f,8);
    return;
  }
  if (cVar2 == '\x02') {
    iVar5 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001c5108,param_1 + 0x1a4);
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + 0xc4b) = 0;
    }
    iVar5 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar5 == 2) {
      FUN_003717ac(param_1 + 0x1a4,DAT_001c510c,1);
      *(undefined4 *)(param_1 + 0x1e4) = DAT_001c5110;
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1ec);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      *(undefined2 *)(param_1 + 0xcaa) = 2;
      *(undefined4 *)(param_1 + 0xef8) = 0x26;
      FUN_003724dc(*(float *)(param_1 + 0x98) + fVar8,ABS(*(float *)(param_1 + 0x9c)) + fVar8,
                   param_1,param_2);
      *(undefined4 *)(param_1 + 0xbbc) = DAT_001c5114;
      *(undefined1 *)(param_1 + 0xc4a) = 0;
    }
  }
  return;
}
