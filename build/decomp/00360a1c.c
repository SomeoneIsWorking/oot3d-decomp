// OoT3D decomp @ 00360a1c  name=FUN_00360a1c  size=664

void FUN_00360a1c(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint in_fpscr;
  float fVar11;
  
  uVar7 = DAT_00360cc0;
  iVar6 = DAT_00360cbc;
  iVar5 = DAT_00360cb8;
  uVar4 = DAT_00360cb4;
  do {
    uVar8 = (uint)*(short *)(param_2 + 1);
    if ((int)uVar8 < 0) {
      uVar8 = -uVar8;
    }
    uVar10 = uVar8 & 0x7800;
    fVar11 = (float)VectorUnsignedToFloat(uVar8 & 0x7ff,(byte)(in_fpscr >> 0x15) & 3);
    iVar9 = FUN_0036b1e0(ABS(fVar11),param_1 + 0x254);
    if (iVar9 != 0) {
      if (uVar10 == 0x800) {
        FUN_0036f59c(param_1,*param_2);
      }
      else if (uVar10 == 0x1000) {
        FUN_0036f59c(param_1,*(int *)(param_1 + 0x228c) + *param_2);
      }
      else if (uVar10 == 0x1800) {
        FUN_0036f59c(param_1,*(int *)(param_1 + 0x228c) +
                             (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + *param_2);
      }
      else if (uVar10 == 0x2000) {
        if (*(char *)(param_1 + 2) == '\x02') {
          FUN_0036f59c(param_1,*param_2 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
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
        iVar9 = iVar5;
        if (cVar2 != '\x01') {
          iVar9 = *(int *)(param_1 + 0x228c) + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6)
                  + 0x1000001;
        }
        FUN_0032d700(uVar3,param_1 + 0x28,iVar9);
      }
      else if (uVar10 == 0x3800) {
        iVar9 = DAT_00360cc4;
        if (*(char *)(param_1 + 0x1a7) != '\x01') {
          cVar2 = *(char *)(iVar6 + 0x80);
          iVar9 = *(int *)(param_1 + 0x228c) + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6)
                  + 0x1000011;
          if ((cVar2 == ';' || cVar2 == '<') || cVar2 == '=') {
            FUN_0036f59c(param_1,DAT_00360cc8);
          }
        }
        FUN_0036f59c(param_1,iVar9);
      }
      else {
        if (uVar10 == 0x4000) {
          cVar2 = *(char *)(param_1 + 0x1a7);
          uVar3 = uVar7;
          goto joined_r0x00360c58;
        }
        if (uVar10 == 0x4800) {
          FUN_0032d700(uVar7,param_1 + 0x28,
                       *(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + 0x100000b);
        }
      }
    }
    piVar1 = param_2 + 1;
    param_2 = param_2 + 2;
    if (*(short *)piVar1 < 0) {
      return;
    }
  } while( true );
}

