// OoT3D decomp @ 00288050  name=FUN_00288050  size=288

void FUN_00288050(undefined4 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  uint in_fpscr;
  float fVar14;

  FUN_0036b4ec(param_2 + 0x254,param_1);
  iVar10 = DAT_00288170;
  if (*(int *)(DAT_00288170 + 4) == 0) {
    iVar7 = FUN_0036b1e0(DAT_00288174,param_2 + 0x254);
    if (iVar7 == 0) {
      if (*(int *)(iVar10 + 4) != 0) goto LAB_00288098;
      goto LAB_00288120;
    }
  }
  else {
LAB_00288098:
    iVar8 = FUN_0036b1e0(DAT_00288178,param_2 + 0x254);
    uVar6 = DAT_00360cc0;
    iVar5 = DAT_00360cbc;
    iVar7 = DAT_00360cb8;
    uVar4 = DAT_00360cb4;
    if (iVar8 == 0) {
      piVar12 = DAT_00288188;
      if (*(int *)(iVar10 + 4) != 0) {
        do {
          uVar9 = (uint)(short)piVar12[1];
          if ((int)uVar9 < 0) {
            uVar9 = -uVar9;
          }
          uVar11 = uVar9 & 0x7800;
          fVar14 = (float)VectorUnsignedToFloat(uVar9 & 0x7ff,(byte)(in_fpscr >> 0x15) & 3);
          iVar10 = FUN_0036b1e0(ABS(fVar14),param_2 + 0x254);
          if (iVar10 != 0) {
            if (uVar11 == 0x800) {
              FUN_0036f59c(param_2,*piVar12);
            }
            else if (uVar11 == 0x1000) {
              FUN_0036f59c(param_2,*(int *)(param_2 + 0x228c) + *piVar12);
            }
            else if (uVar11 == 0x1800) {
              FUN_0036f59c(param_2,*(int *)(param_2 + 0x228c) +
                                   (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf6) + *piVar12);
            }
            else if (uVar11 == 0x2000) {
              if (*(char *)(param_2 + 2) == '\x02') {
                FUN_0036f59c(param_2,*piVar12 + (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf4)
                            );
              }
              else {
                FUN_0036aeb4(param_2 + 0x28);
              }
            }
            else if (uVar11 == 0x2800) {
              FUN_0034bd3c(param_2);
            }
            else if (uVar11 == 0x3000) {
              cVar2 = *(char *)(param_2 + 0x1a7);
              uVar3 = uVar4;
joined_r0x00360c58:
              iVar10 = iVar7;
              if (cVar2 != '\x01') {
                iVar10 = *(int *)(param_2 + 0x228c) +
                         (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf6) + 0x1000001;
              }
              FUN_0032d700(uVar3,param_2 + 0x28,iVar10);
            }
            else if (uVar11 == 0x3800) {
              iVar10 = DAT_00360cc4;
              if (*(char *)(param_2 + 0x1a7) != '\x01') {
                cVar2 = *(char *)(iVar5 + 0x80);
                iVar10 = *(int *)(param_2 + 0x228c) +
                         (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf6) + 0x1000011;
                if ((cVar2 == ';' || cVar2 == '<') || cVar2 == '=') {
                  FUN_0036f59c(param_2,DAT_00360cc8);
                }
              }
              FUN_0036f59c(param_2,iVar10);
            }
            else {
              if (uVar11 == 0x4000) {
                cVar2 = *(char *)(param_2 + 0x1a7);
                uVar3 = uVar6;
                goto joined_r0x00360c58;
              }
              if (uVar11 == 0x4800) {
                FUN_0032d700(uVar6,param_2 + 0x28,
                             *(ushort *)(*(int *)(param_2 + 0x170c) + 0xf6) + 0x100000b);
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
LAB_00288120:
      iVar10 = FUN_0036b1e0(DAT_0028818c,param_2 + 0x254);
      if (iVar10 == 0) {
        return;
      }
      cVar2 = *(char *)(param_2 + 2);
      iVar10 = DAT_00288190;
      goto joined_r0x00288144;
    }
  }
  puVar13 = (undefined4 *)(DAT_0028817c + *(int *)(iVar10 + 4) * 8);
  *(int *)(*(int *)(param_2 + 0x12b0) + 0x124) = param_2;
  iVar7 = DAT_00288180;
  if (*(int *)(iVar10 + 4) != 0) {
    iVar7 = DAT_00288184;
  }
  *(int *)(param_2 + 0x1c0) = iVar7 + *(int *)(iVar10 + 4) * 4;
  FUN_0036f59c(param_2,*puVar13);
  if (*(int *)(iVar10 + 4) == 0) {
    return;
  }
  cVar2 = *(char *)(param_2 + 2);
  iVar10 = puVar13[1];
joined_r0x00288144:
  if (cVar2 == '\x02') {
    FUN_0036f59c(param_2,iVar10 + (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf4));
    return;
  }
  FUN_0036aeb4(param_2 + 0x28);
  return;
}
