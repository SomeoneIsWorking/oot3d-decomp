// OoT3D decomp @ 003ed520  name=FUN_003ed520  size=308

void FUN_003ed520(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;

  if (*(char *)(param_1 + 0x1a4) != '\x01') {
    uVar7 = (uint)*(byte *)(DAT_003ed654 + param_2);
    bVar12 = uVar7 == 3;
    if (!bVar12) {
      uVar7 = *(uint *)(DAT_003ed658 + 0x28);
    }
    if ((bVar12 || uVar7 == 9) ||
       ((((iVar8 = uVar7 - 2, -1 < iVar8 && (iVar8 < 2)) && (-1 < iVar8)) &&
        (iVar8 = FUN_0035d178(param_2 + 0xa98,*(undefined4 *)(param_1 + 0x7c),
                              *(undefined1 *)(param_1 + 0x81)), iVar8 == 0)))) {
      FUN_0035d8d8(param_1,param_2,0);
    }
  }
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003ed65c + 0x6a),
                                      (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(DAT_003ed664,fVar13 * DAT_003ed660,param_1 + 0x221c);
  iVar9 = FUN_0036b4ec(param_1 + 0x254,param_2);
  uVar6 = DAT_00360cc0;
  iVar5 = DAT_00360cbc;
  iVar8 = DAT_00360cb8;
  uVar4 = DAT_00360cb4;
  if (iVar9 == 0) {
    piVar11 = DAT_003ed668;
    if (*(int *)(param_1 + 0x284) == 0x17a) {
      do {
        uVar7 = (uint)(short)piVar11[1];
        if ((int)uVar7 < 0) {
          uVar7 = -uVar7;
        }
        uVar10 = uVar7 & 0x7800;
        fVar13 = (float)VectorUnsignedToFloat(uVar7 & 0x7ff,(byte)(in_fpscr >> 0x15) & 3);
        iVar9 = FUN_0036b1e0(ABS(fVar13),param_1 + 0x254);
        if (iVar9 != 0) {
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
            iVar9 = iVar8;
            if (cVar2 != '\x01') {
              iVar9 = *(int *)(param_1 + 0x228c) +
                      (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + 0x1000001;
            }
            FUN_0032d700(uVar3,param_1 + 0x28,iVar9);
          }
          else if (uVar10 == 0x3800) {
            iVar9 = DAT_00360cc4;
            if (*(char *)(param_1 + 0x1a7) != '\x01') {
              cVar2 = *(char *)(iVar5 + 0x80);
              iVar9 = *(int *)(param_1 + 0x228c) +
                      (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + 0x1000011;
              if ((cVar2 == ';' || cVar2 == '<') || cVar2 == '=') {
                FUN_0036f59c(param_1,DAT_00360cc8);
              }
            }
            FUN_0036f59c(param_1,iVar9);
          }
          else {
            if (uVar10 == 0x4000) {
              cVar2 = *(char *)(param_1 + 0x1a7);
              uVar3 = uVar6;
              goto joined_r0x00360c58;
            }
            if (uVar10 == 0x4800) {
              FUN_0032d700(uVar6,param_1 + 0x28,
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
    if ((*(int *)(param_1 + 0x284) == 0xb6) &&
       (iVar8 = FUN_0036b1e0(DAT_003ed66c,param_1 + 0x254), iVar8 != 0)) {
      FUN_0036f59c(param_1,*(int *)(DAT_003ed670 + param_1) + 0x1000051);
      return;
    }
  }
  else if (*(char *)(param_1 + 2) == '\x02') {
    FUN_0034ae64(param_2,param_1);
    return;
  }
  return;
}
