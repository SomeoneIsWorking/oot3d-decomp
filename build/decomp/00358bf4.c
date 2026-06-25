// OoT3D decomp @ 00358bf4  name=FUN_00358bf4  size=476

undefined4 FUN_00358bf4(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  
  fVar1 = DAT_00358dd0;
  bVar7 = (*(uint *)(param_2 + 0x1710) & 0x400) == 0;
  if (bVar7) {
    bVar7 = (*(uint *)(param_2 + 0x1714) & 0x400) == 0;
  }
  if (bVar7) {
    if ((param_3 == 0) ||
       ((((*DAT_00358dd8 & *(uint *)(*(int *)(DAT_00358dd4 + param_2) + 4)) != 0 &&
         ((uint)((int)*(short *)(param_2 + 0x175c) + ((int)DAT_00358ddc >> 1)) <= DAT_00358ddc)) &&
        (*(char *)(param_2 + 0x1a7) != '\x01')))) {
      FUN_0036055c(param_1,param_2,DAT_00358de0,0);
      FUN_003604f0(param_2 + 0x254,param_1,0x38);
      *(undefined2 *)(param_2 + 0x175c) = 0;
      *(float *)(param_2 + 100) = fVar1;
      uVar3 = *(uint *)(param_2 + 0x1714);
      *(uint *)(param_2 + 0x1714) = uVar3 | 0x400;
      if (param_3 != 0) {
        *(uint *)(param_2 + 0x1714) = uVar3 | 0xc00;
        FUN_0036f59c(param_2,DAT_00358de4);
      }
      return 1;
    }
  }
  else {
    fVar8 = *(float *)(param_2 + 100);
    if ((fVar8 != DAT_00358dd0 && fVar8 < DAT_00358dd0 == (NAN(fVar8) || NAN(DAT_00358dd0))) &&
       (uVar3 = in_fpscr & 0xfffffff |
                (uint)(*(float *)(*(int *)(param_2 + 0x170c) + 0x30) <= *(float *)(param_2 + 0x88))
                << 0x1d, !SUB41(uVar3 >> 0x1d,0))) {
      *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) & 0xfffffbff;
      if (param_3 != 0) {
        FUN_0036055c(param_1,param_2,DAT_00358de8,1);
        iVar5 = DAT_00358dec;
        if ((*(uint *)(param_2 + 0x1710) & 0x400) != 0) {
          *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x20000c00;
        }
        *(undefined2 *)(iVar5 + param_2) = 2;
      }
      FUN_00355264(param_1,param_2);
      uVar2 = DAT_00358df0;
      if ((*(uint *)(param_2 + 0x1710) & 0x800) == 0) {
        uVar6 = 0x39;
      }
      else {
        uVar6 = 0x36;
      }
      uVar4 = FUN_003603c0(param_2 + 0x254,uVar6);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar3 >> 0x15) & 3);
      FUN_00360190(DAT_00358df4,fVar1,uVar4,uVar2,param_2 + 0x254,param_1,uVar6,2);
      iVar5 = FUN_00358b3c(*(undefined4 *)(param_2 + 100),param_1,param_2,500);
      if (iVar5 == 0) {
        return 1;
      }
      FUN_0036f59c(param_2,DAT_00358df8);
      return 1;
    }
  }
  return 0;
}

