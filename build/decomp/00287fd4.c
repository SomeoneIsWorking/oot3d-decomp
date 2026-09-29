// OoT3D decomp @ 00287fd4  name=FUN_00287fd4  size=116

void FUN_00287fd4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint in_fpscr;
  float fVar12;

  iVar8 = FUN_0036b4ec(param_2 + 0x254,param_1);
  uVar7 = DAT_00360cc0;
  iVar6 = DAT_00360cbc;
  iVar5 = DAT_00360cb8;
  uVar4 = DAT_00360cb4;
  if (iVar8 != 0) {
    FUN_003343ec(param_1,param_2,param_3);
    return;
  }
  piVar11 = DAT_0028804c;
  if (*(short *)(DAT_00288048 + param_2) == 0) {
    FUN_00376a78(param_1,0x3c);
    FUN_003383b0(param_1,param_2,0);
    return;
  }
  do {
    uVar9 = (uint)(short)piVar11[1];
    if ((int)uVar9 < 0) {
      uVar9 = -uVar9;
    }
    uVar10 = uVar9 & 0x7800;
    fVar12 = (float)VectorUnsignedToFloat(uVar9 & 0x7ff,(byte)(in_fpscr >> 0x15) & 3);
    iVar8 = FUN_0036b1e0(ABS(fVar12),param_2 + 0x254);
    if (iVar8 != 0) {
      if (uVar10 == 0x800) {
        FUN_0036f59c(param_2,*piVar11);
      }
      else if (uVar10 == 0x1000) {
        FUN_0036f59c(param_2,*(int *)(param_2 + 0x228c) + *piVar11);
      }
      else if (uVar10 == 0x1800) {
        FUN_0036f59c(param_2,*(int *)(param_2 + 0x228c) +
                             (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf6) + *piVar11);
      }
      else if (uVar10 == 0x2000) {
        if (*(char *)(param_2 + 2) == '\x02') {
          FUN_0036f59c(param_2,*piVar11 + (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf4));
        }
        else {
          FUN_0036aeb4(param_2 + 0x28);
        }
      }
      else if (uVar10 == 0x2800) {
        FUN_0034bd3c(param_2);
      }
      else if (uVar10 == 0x3000) {
        cVar2 = *(char *)(param_2 + 0x1a7);
        uVar3 = uVar4;
joined_r0x00360c58:
        iVar8 = iVar5;
        if (cVar2 != '\x01') {
          iVar8 = *(int *)(param_2 + 0x228c) + (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf6)
                  + 0x1000001;
        }
        FUN_0032d700(uVar3,param_2 + 0x28,iVar8);
      }
      else if (uVar10 == 0x3800) {
        iVar8 = DAT_00360cc4;
        if (*(char *)(param_2 + 0x1a7) != '\x01') {
          cVar2 = *(char *)(iVar6 + 0x80);
          iVar8 = *(int *)(param_2 + 0x228c) + (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf6)
                  + 0x1000011;
          if ((cVar2 == ';' || cVar2 == '<') || cVar2 == '=') {
            FUN_0036f59c(param_2,DAT_00360cc8);
          }
        }
        FUN_0036f59c(param_2,iVar8);
      }
      else {
        if (uVar10 == 0x4000) {
          cVar2 = *(char *)(param_2 + 0x1a7);
          uVar3 = uVar7;
          goto joined_r0x00360c58;
        }
        if (uVar10 == 0x4800) {
          FUN_0032d700(uVar7,param_2 + 0x28,
                       *(ushort *)(*(int *)(param_2 + 0x170c) + 0xf6) + 0x100000b);
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
