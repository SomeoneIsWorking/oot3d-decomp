// OoT3D decomp @ 0023c210  name=FUN_0023c210  size=680

void FUN_0023c210(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;

  FUN_00372224(&local_54,param_1 + 0x148);
  iVar2 = FUN_0037571c(param_2);
  iVar3 = 0;
  if (iVar2 != 0) {
    unaff_r6 = param_2 + 0x2000;
    iVar3 = *(int *)(&DAT_000022e4 + param_2);
  }
  if (iVar2 != 0 && iVar3 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1c8);
    uVar4 = (uint)uVar1;
    fVar9 = (float)VectorUnsignedToFloat((uint)*(ushort *)(iVar3 + 10),(byte)(in_fpscr >> 0x15) & 3)
    ;
    uVar6 = VectorFloatToUnsigned(fVar9 * DAT_0023c4b8,3);
    if (uVar4 != (uVar6 & 0xffff)) {
      if (uVar4 != 0xffff) {
        *(ushort *)(param_1 + 0x1ca) = uVar1;
      }
      *(short *)(param_1 + 0x1c8) = (short)uVar6;
      if (uVar4 == 0xffff) {
        *(undefined2 *)(param_1 + 0x1ca) = *(undefined2 *)(param_1 + 0x1c8);
      }
    }
    fVar7 = (float)FUN_00361490(*(undefined2 *)(*(int *)(unaff_r6 + 0x2e4) + 4),
                                *(undefined2 *)(*(int *)(unaff_r6 + 0x2e4) + 2),
                                *(undefined2 *)(DAT_0023c4bc + param_2));
    fVar9 = DAT_0023c4c0;
    if (**(short **)(unaff_r6 + 0x2e4) == 2) {
      iVar3 = FUN_003695f8();
      fVar10 = DAT_0023c4c8;
      iVar2 = *(int *)(unaff_r6 + 0x2e4);
      if (iVar3 != 0) {
        fVar9 = DAT_0023c4c4;
      }
      local_48 = VectorSignedToFloat(*(undefined4 *)(iVar2 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
      local_28 = VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
      local_38 = VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
      local_4c = 0.0;
      local_50 = 0.0;
      local_54 = 1.0;
      local_44 = 0.0;
      local_40 = 1.0;
      local_30 = 0.0;
      local_2c = 1.0;
      local_3c = 0.0;
      local_34 = 0.0;
      fVar8 = (float)VectorUnsignedToFloat
                               ((uint)*(ushort *)(*(int *)(unaff_r6 + 0x2e4) + 6),
                                (byte)(in_fpscr >> 0x15) & 3);
      FUN_00369014(fVar8 * DAT_0023c4c8,&local_54,1);
      fVar8 = (float)VectorUnsignedToFloat
                               ((uint)*(ushort *)(*(int *)(unaff_r6 + 0x2e4) + 8),
                                (byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(fVar8 * fVar10,&local_54,1);
      uVar1 = *(ushort *)(param_2 + 0x104);
      bVar5 = uVar1 != 0x53;
      if (!bVar5) {
        uVar1 = (ushort)*(byte *)(param_1 + 3);
      }
      if (bVar5 || uVar1 != 1) {
        fVar8 = (float)VectorSignedToFloat((uint)*(ushort *)(param_1 + 0x1c8) -
                                           (uint)*(ushort *)(param_1 + 0x1ca),
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar10 = (float)VectorUnsignedToFloat
                                  ((uint)*(ushort *)(param_1 + 0x1ca),(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = (fVar10 + fVar8 * fVar7) * DAT_0023c4cc;
        fVar7 = DAT_0023c4d8;
      }
      else {
        fVar8 = (float)VectorSignedToFloat((uint)*(ushort *)(param_1 + 0x1c8) -
                                           (uint)*(ushort *)(param_1 + 0x1ca),
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar10 = (float)VectorUnsignedToFloat
                                  ((uint)*(ushort *)(param_1 + 0x1ca),(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = (fVar10 + fVar8 * fVar7) * DAT_0023c4cc * DAT_0023c4d4;
        fVar7 = DAT_0023c4d0;
      }
      local_54 = local_54 * fVar7;
      local_44 = local_44 * fVar7;
      local_34 = local_34 * fVar7;
      local_50 = local_50 * fVar7;
      local_40 = local_40 * fVar7;
      local_30 = local_30 * fVar7;
      local_4c = local_4c * fVar10;
      local_3c = local_3c * fVar10;
      local_2c = local_2c * fVar10;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0xc) + 0xc) = fVar9 * DAT_0023c4dc;
      *(undefined1 *)(*(int *)(param_1 + 0x1d0) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1d0),&local_54);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1d0),0);
    }
  }
  return;
}
