// OoT3D decomp @ 0034ca4c  name=FUN_0034ca4c  size=360

uint FUN_0034ca4c(byte *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint in_fpscr;
  undefined4 uVar7;
  float fVar8;
  int local_40 [10];

  do {
    bVar2 = *param_1 & 0xe0;
    if (bVar2 == 0x40) {
      iVar6 = 0;
      iVar3 = 0;
      pbVar5 = param_1;
      do {
        iVar4 = FUN_00359020(pbVar5);
        iVar6 = iVar6 + iVar4;
        local_40[iVar3] = iVar4;
        pbVar5 = pbVar5 + 4;
        iVar3 = iVar3 + 1;
      } while ((*pbVar5 & 0xe0) == 0x40);
      if (iVar6 != 0) {
        uVar7 = VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = (float)FUN_00371e50(uVar7);
        iVar4 = (int)fVar8;
        iVar6 = 0;
        if (0 < iVar3) {
          do {
            if (local_40[iVar6] != 0) {
              if (iVar4 < 1) goto LAB_0034cba4;
              iVar4 = iVar4 + -1;
            }
            iVar6 = iVar6 + 1;
            param_1 = param_1 + 4;
          } while (iVar6 < iVar3);
        }
      }
    }
    else if (bVar2 < 0x41) {
      if ((*param_1 & 0xe0) == 0) {
        iVar3 = FUN_00359020(param_1);
joined_r0x0034cab8:
        if (iVar3 != 0) goto LAB_0034cba4;
      }
      else if (bVar2 == 0x20) {
        bVar1 = true;
        do {
          iVar3 = FUN_00359020(param_1);
          param_1 = param_1 + 4;
          if (iVar3 == 0) {
            bVar1 = false;
          }
        } while ((*param_1 & 0xe0) == 0x20);
        if (bVar1) {
          iVar3 = FUN_00359020(param_1);
          goto joined_r0x0034cab8;
        }
      }
    }
    else if (bVar2 == 0x60) {
      iVar3 = FUN_00359020(param_1);
      if (iVar3 != 0) {
        param_1 = param_1 + (uint)param_1[2] * 4 + -4;
      }
    }
    else if (bVar2 == 0xe0) {
LAB_0034cba4:
      return param_1[2] | 0x100;
    }
    param_1 = param_1 + 4;
  } while( true );
}
