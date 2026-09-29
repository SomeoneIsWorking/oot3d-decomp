// OoT3D decomp @ 003ac060  name=FUN_003ac060  size=632

void FUN_003ac060(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;

  uVar2 = DAT_003ac300;
  uVar1 = DAT_003ac2fc;
  local_40 = DAT_003ac2d8;
  uStack_3c = DAT_003ac2dc;
  uStack_38 = DAT_003ac2e0;
  local_4c = DAT_003ac2e4;
  local_48 = DAT_003ac2e8;
  local_44 = DAT_003ac2ec;
  local_58 = DAT_003ac2f0;
  local_54 = DAT_003ac2f4;
  local_50 = DAT_003ac2f8;
  FUN_003731e0(param_1 + 0x1a4);
  uVar3 = DAT_003ac304;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 1;
  FUN_003fd1b8(uVar3,param_2,param_1,param_1 + 0x1a4);
  iVar4 = FUN_0037571c(param_2);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x3f4) = DAT_003ac308;
  }
  else {
    puVar6 = *(ushort **)(DAT_003ac30c + param_2);
    if (puVar6 != (ushort *)0x0) {
      fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(puVar6 + 6),(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(puVar6 + 8),(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(puVar6 + 10),(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(puVar6 + 0xc),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(puVar6 + 0xe),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(puVar6 + 0x10),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if (*(short *)(param_1 + 0x456) == 0) {
        *(float *)(param_1 + 8) = fVar7;
        *(float *)(param_1 + 0xc) = fVar8;
        *(float *)(param_1 + 0x10) = fVar9;
        *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
      }
      iVar4 = DAT_003ac310;
      if ((int)*(short *)(param_1 + 0x456) != (uint)*puVar6) {
        uVar5 = FUN_0036ae18(param_1 + 0x1a4,(int)*(char *)(DAT_003ac310 + (uint)*puVar6));
        uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar3,uVar2,uVar5,DAT_003ac314,param_1 + 0x1a4,
                     (int)*(char *)(iVar4 + (uint)*puVar6),
                     *(undefined1 *)((int)&local_40 + (uint)*puVar6));
        *(ushort *)(param_1 + 0x456) = *puVar6;
      }
      *(undefined4 *)(param_1 + 0x60) = uVar2;
      *(undefined4 *)(param_1 + 100) = uVar2;
      *(undefined4 *)(param_1 + 0x68) = uVar2;
      if ((uint)*(ushort *)(DAT_003ac318 + param_2) < (uint)puVar6[2]) {
        fVar10 = (float)VectorSignedToFloat((uint)puVar6[2] - (uint)puVar6[1],
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x60) = (fVar11 - fVar7) / fVar10;
        fVar7 = (fVar12 - fVar8) / fVar10;
        *(float *)(param_1 + 100) = fVar7;
        fVar7 = fVar7 + *(float *)(param_1 + 0x70);
        *(float *)(param_1 + 100) = fVar7;
        if (fVar7 < *(float *)(param_1 + 0x74)) {
          *(float *)(param_1 + 100) = *(float *)(param_1 + 0x74);
        }
        *(float *)(param_1 + 0x68) = (fVar13 - fVar9) / fVar10;
      }
      FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x466,param_1 + 0x46c,
                   0x4300);
      FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x458),&local_4c,&local_58);
      FUN_00354220(uVar1,param_2,(int)*(short *)(param_1 + 0x458));
    }
  }
  return;
}
