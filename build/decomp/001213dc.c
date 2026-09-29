// OoT3D decomp @ 001213dc  name=FUN_001213dc  size=572

void FUN_001213dc(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_24;
  undefined4 local_20;
  float local_1c;

  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0xa4e) != 0) {
    sVar1 = *(short *)(param_1 + 0xa4e) + -1;
    iVar2 = (int)sVar1;
    *(short *)(param_1 + 0xa4e) = sVar1;
    fVar8 = DAT_00121634;
    fVar7 = DAT_00121630;
    if (iVar2 != 0) {
      if (iVar2 < 0xc) {
        return;
      }
      fVar6 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      *(ushort *)(param_1 + 0xbe) =
           *(short *)(param_1 + 0xbe) + (ushort)*(byte *)(param_1 + 0xa4c) * 0x200;
      fVar7 = (float)FUN_003727f0((fVar6 * fVar7 * fVar8 - DAT_00121638) * DAT_0012163c);
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar7 * DAT_00121640;
      *(ushort *)(param_1 + 0x36) =
           *(short *)(param_1 + 0xbe) + (ushort)*(byte *)(param_1 + 0xa4c) * -0x4000;
      fVar8 = (float)FUN_002cfca0();
      fVar7 = DAT_00121644;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar8 * DAT_00121644;
      fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar8 * fVar7;
      fVar7 = DAT_00121648;
      if (*(short *)(param_1 + 0xa4e) != 0xc) {
        return;
      }
      local_20 = *(undefined4 *)(param_1 + 0x2c);
      uVar5 = 0;
      do {
        if ((int)uVar5 < 2) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = 1;
        }
        if ((uVar5 & 1) == 0) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = 1;
        }
        fVar8 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
        local_24 = *(float *)(param_1 + 0x28) + fVar8 * fVar7;
        fVar8 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        local_1c = *(float *)(param_1 + 0x30) + fVar8 * fVar7;
        FUN_0036e670(param_2,&local_24,0,0,1,2000);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 4);
      FUN_00375bcc(param_1,DAT_0012164c);
      FUN_00375bcc(param_1,DAT_00121650);
      FUN_0036fca8(param_1,param_2,10,8);
      return;
    }
  }
  if (*(char *)(param_1 + 0xb7) == '\0') {
    FUN_00374a58(param_1 + 0x1a4,4);
    FUN_00375bcc(param_1,DAT_00121628);
    *(undefined2 *)(param_1 + 0xa4e) = 0x39;
    *(undefined2 *)(param_1 + 0xa50) = 0xf;
    uVar3 = DAT_0012162c;
  }
  else {
    FUN_00375c08(DAT_00121620,DAT_0012161c,DAT_0012161c,DAT_00121618,param_1 + 0x1a4,0);
    *(undefined1 *)(param_1 + 0xa4d) = 1;
    *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0xbe) + -0x8000;
    *(ushort *)(param_1 + 0xa52) = (ushort)*(byte *)(param_1 + 0xa4c) << 9;
    *(byte *)(param_1 + 0xa65) = *(byte *)(param_1 + 0xa65) & 0xfe;
    *(byte *)(param_1 + 0xad4) = *(byte *)(param_1 + 0xad4) | 1;
    uVar3 = DAT_00121624;
  }
  *(undefined4 *)(param_1 + 0xa48) = uVar3;
  return;
}
