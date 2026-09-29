// OoT3D decomp @ 0049690c  name=FUN_0049690c  size=340

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0049690c(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;

  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00496a60 + 0x6a),
                                      (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(DAT_00496a68,fVar13 * DAT_00496a64,param_1 + 0x221c);
  iVar9 = FUN_0036b4ec(param_1 + 0x254,param_2);
  if (iVar9 != 0) {
    FUN_002c0948(param_1,param_2);
    FUN_0036c5bc(param_2,0);
    FUN_0036ae48();
    return;
  }
  iVar10 = FUN_0036b1e0(DAT_00496a6c,param_1 + 0x254);
  uVar6 = DAT_00360cc0;
  iVar5 = DAT_00360cbc;
  iVar9 = DAT_00360cb8;
  uVar4 = DAT_00360cb4;
  piVar12 = DAT_00496a70;
  if (iVar10 != 0) {
    iVar9 = DAT_00496a74 + *(char *)(param_1 + 0x1ac) * 4;
    fVar13 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    fVar7 = DAT_00496a78;
    fVar15 = *(float *)(param_1 + 0x1230);
    fVar13 = fVar13 * DAT_00496a78;
    fVar14 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    z_actor_003738d0(*(float *)(param_1 + 0x1228) + fVar14 * fVar7,*(undefined4 *)(param_1 + 0x122c)
                     ,fVar15 + fVar13,param_2 + 0x208c,param_2,(int)*(short *)(iVar9 + -0x7c),0x4000
                    );
    iVar9 = FUN_002c0930(param_1,(int)*(char *)(param_1 + 0x1a9));
    if (iVar9 - 1U < 3) {
      *(undefined1 *)(param_1 + 0x1a9) = 0x1e;
    }
    FUN_0035e580(param_2,param_1,0x14,0x1e);
    return;
  }
  do {
    uVar8 = (uint)(short)piVar12[1];
    if ((int)uVar8 < 0) {
      uVar8 = -uVar8;
    }
    uVar11 = uVar8 & 0x7800;
    fVar13 = (float)VectorUnsignedToFloat(uVar8 & 0x7ff,(byte)(in_fpscr >> 0x15) & 3);
    iVar10 = FUN_0036b1e0(ABS(fVar13),param_1 + 0x254);
    if (iVar10 != 0) {
      if (uVar11 == 0x800) {
        FUN_0036f59c(param_1,*piVar12);
      }
      else if (uVar11 == 0x1000) {
        FUN_0036f59c(param_1,*(int *)(param_1 + 0x228c) + *piVar12);
      }
      else if (uVar11 == 0x1800) {
        FUN_0036f59c(param_1,*(int *)(param_1 + 0x228c) +
                             (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + *piVar12);
      }
      else if (uVar11 == 0x2000) {
        if (*(char *)(param_1 + 2) == '\x02') {
          FUN_0036f59c(param_1,*piVar12 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
        }
        else {
          FUN_0036aeb4(param_1 + 0x28);
        }
      }
      else if (uVar11 == 0x2800) {
        FUN_0034bd3c(param_1);
      }
      else if (uVar11 == 0x3000) {
        cVar2 = *(char *)(param_1 + 0x1a7);
        uVar3 = uVar4;
joined_r0x00360c58:
        iVar10 = iVar9;
        if (cVar2 != '\x01') {
          iVar10 = *(int *)(param_1 + 0x228c) + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6)
                   + 0x1000001;
        }
        FUN_0032d700(uVar3,param_1 + 0x28,iVar10);
      }
      else if (uVar11 == 0x3800) {
        iVar10 = DAT_00360cc4;
        if (*(char *)(param_1 + 0x1a7) != '\x01') {
          cVar2 = *(char *)(iVar5 + 0x80);
          iVar10 = *(int *)(param_1 + 0x228c) + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6)
                   + 0x1000011;
          if ((cVar2 == ';' || cVar2 == '<') || cVar2 == '=') {
            FUN_0036f59c(param_1,DAT_00360cc8);
          }
        }
        FUN_0036f59c(param_1,iVar10);
      }
      else {
        if (uVar11 == 0x4000) {
          cVar2 = *(char *)(param_1 + 0x1a7);
          uVar3 = uVar6;
          goto joined_r0x00360c58;
        }
        if (uVar11 == 0x4800) {
          FUN_0032d700(uVar6,param_1 + 0x28,
                       *(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + 0x100000b);
        }
      }
    }
    piVar1 = piVar12 + 1;
    piVar12 = piVar12 + 2;
    if ((short)*piVar1 < 0) {
      return;
    }
  } while( true );
}
