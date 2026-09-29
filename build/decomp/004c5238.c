// OoT3D decomp @ 004c5238  name=FUN_004c5238  size=288

void FUN_004c5238(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint in_fpscr;
  float fVar12;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  if (-1 < *(char *)(DAT_004c5358 + param_1)) {
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004c535c + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)*(char *)(DAT_004c5358 + param_1) < (int)(DAT_004c5360 / fVar12 + DAT_004c5364)) {
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004c535c + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(DAT_004c5358 + param_1) = (char)(int)(DAT_004c5360 / fVar12 + DAT_004c5364);
    }
  }
  if ((*(uint *)(param_1 + 0x1710) & 0x20000000) == 0) {
    iVar8 = FUN_0034b33c(DAT_004c5368,param_2,param_1,param_1 + 0x254);
    if ((iVar8 != 0) && ((iVar9 = FUN_0036b4ec(param_1 + 0x254,param_2), iVar9 != 0 || (0 < iVar8)))
       ) {
      FUN_0036b2d4(DAT_004c536c,param_1,param_2);
    }
  }
  else {
    FUN_0036b4ec(param_1 + 0x254,param_2);
  }
  uVar5 = DAT_00360cc0;
  iVar9 = DAT_00360cbc;
  iVar8 = DAT_00360cb8;
  uVar4 = DAT_00360cb4;
  piVar11 = DAT_004c5370;
  if (*(int *)(param_1 + 0x284) != 0xde) {
    FUN_00360a1c(param_1,DAT_004c5374);
    return;
  }
  do {
    uVar6 = (uint)(short)piVar11[1];
    if ((int)uVar6 < 0) {
      uVar6 = -uVar6;
    }
    uVar10 = uVar6 & 0x7800;
    fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0x7ff,(byte)(in_fpscr >> 0x15) & 3);
    iVar7 = FUN_0036b1e0(ABS(fVar12),param_1 + 0x254);
    if (iVar7 != 0) {
      if (uVar10 == 0x800) {
        FUN_0036f59c(param_1,*piVar11);
      }
      else if (uVar10 == 0x1000) {
        FUN_0036f59c(param_1,*(int *)(param_1 + 0x228c) + *piVar11);
      }
      else if (uVar10 == 0x1800) {
        FUN_0036f59c(param_1,*(int *)(param_1 + 0x228c) +
                             (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + *piVar11);
      }
      else if (uVar10 == 0x2000) {
        if (*(char *)(param_1 + 2) == '\x02') {
          FUN_0036f59c(param_1,*piVar11 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
        }
        else {
          FUN_0036aeb4(param_1 + 0x28);
        }
      }
      else if (uVar10 == 0x2800) {
        FUN_0034bd3c(param_1);
      }
      else if (uVar10 == 0x3000) {
        cVar2 = *(char *)(param_1 + 0x1a7);
        uVar3 = uVar4;
joined_r0x00360c58:
        iVar7 = iVar8;
        if (cVar2 != '\x01') {
          iVar7 = *(int *)(param_1 + 0x228c) + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6)
                  + 0x1000001;
        }
        FUN_0032d700(uVar3,param_1 + 0x28,iVar7);
      }
      else if (uVar10 == 0x3800) {
        iVar7 = DAT_00360cc4;
        if (*(char *)(param_1 + 0x1a7) != '\x01') {
          cVar2 = *(char *)(iVar9 + 0x80);
          iVar7 = *(int *)(param_1 + 0x228c) + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6)
                  + 0x1000011;
          if ((cVar2 == ';' || cVar2 == '<') || cVar2 == '=') {
            FUN_0036f59c(param_1,DAT_00360cc8);
          }
        }
        FUN_0036f59c(param_1,iVar7);
      }
      else {
        if (uVar10 == 0x4000) {
          cVar2 = *(char *)(param_1 + 0x1a7);
          uVar3 = uVar5;
          goto joined_r0x00360c58;
        }
        if (uVar10 == 0x4800) {
          FUN_0032d700(uVar5,param_1 + 0x28,
                       *(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + 0x100000b);
        }
      }
    }
    piVar1 = piVar11 + 1;
    piVar11 = piVar11 + 2;
    if ((short)*piVar1 < 0) {
      return;
    }
  } while( true );
}
