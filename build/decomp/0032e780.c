// OoT3D decomp @ 0032e780  name=FUN_0032e780  size=836

void FUN_0032e780(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
  iVar1 = DAT_0032eac4;
  *(char *)(DAT_0032eac4 + 0x12) = (char)param_1;
  if (*(int *)(iVar1 + 0x70) == -1) {
    if (*(char *)(iVar1 + 8) != '\0') {
      param_1 = 3;
    }
    iVar4 = FUN_00366684(0);
    uVar2 = DAT_0032eacc;
    iVar7 = DAT_0032eac8 + 3;
    if ((iVar4 != DAT_0032eac8) || (iVar5 = FUN_00366684(3), iVar5 != iVar7)) {
      if (iVar4 != -1) {
        uVar6 = DAT_0032ead0 + iVar4;
        if (0x54 < uVar6) {
          uVar6 = 0;
        }
        if (((*(byte *)(DAT_0032ead4 + uVar6) & 1) == 0) && ((*(byte *)(iVar1 + 0xc) & 0x7f) != 1))
        {
          if (param_1 == 0) {
            if (*(byte *)(iVar1 + 0xc) == 2) {
              *(undefined4 *)(iVar1 + 0x7c) = 0;
            }
            *(undefined4 *)(iVar1 + 0x78) = 0;
            *(int *)(iVar1 + 0x7c) = *(int *)(iVar1 + 0x7c) + 1;
          }
          else {
            uVar6 = *(int *)(iVar1 + 0x78) + 1;
            *(uint *)(iVar1 + 0x78) = uVar6;
            if (((param_1 == 2) && (uVar6 < 0x1e)) && (0x14 < *(uint *)(iVar1 + 0x7c))) {
              param_1 = 0;
            }
          }
          *(char *)(iVar1 + 0xc) = (char)param_1;
          FUN_00356018(0,2,param_1);
          return;
        }
      }
      uVar6 = *(byte *)(iVar1 + 0xc) & 0x7f;
      if (uVar6 == param_1) {
        if (param_1 != 1 || iVar4 != -1) {
          return;
        }
        iVar4 = FUN_00366684(3);
        if (iVar4 == iVar7) {
          return;
        }
        cVar3 = '\x03';
      }
      else {
        if (param_1 == 1) {
          fVar8 = (float)FUN_002d78b4(3);
          fVar9 = (float)VectorSignedToFloat((int)*(char *)(iVar1 + 0xd),
                                             (byte)(in_fpscr >> 0x15) & 3);
          uVar6 = in_fpscr & 0xfffffff | (uint)(DAT_0032ead8 <= fVar8 - fVar9) << 0x1d;
          if (SUB41(uVar6 >> 0x1d,0)) {
            fVar8 = (float)FUN_002d78b4(3);
            fVar9 = (float)VectorSignedToFloat((int)*(char *)(iVar1 + 0xd),(byte)(uVar6 >> 0x15) & 3
                                              );
            fVar8 = fVar8 - fVar9;
          }
          else {
            fVar9 = (float)FUN_002d78b4(3);
            fVar8 = (float)VectorSignedToFloat((int)*(char *)(iVar1 + 0xd),(byte)(uVar6 >> 0x15) & 3
                                              );
            fVar8 = fVar8 - fVar9;
          }
          FUN_00355fac(3,3,*(undefined *)(iVar1 + 0xd),(int)fVar8);
          FUN_0036ec40(3,iVar7,10);
          if (iVar4 != -1) {
            FUN_00355fac(0,3,'\x7f' - *(char *)(iVar1 + 0xd),0x1e);
            FUN_00355fac(3,3,0);
            FUN_00355fac(3,3,*(undefined *)(iVar1 + 0xd),0x1e);
            FUN_0033c9fc((int)*(char *)(iVar1 + 0xd));
          }
          iVar4 = FUN_0032c800(1);
          if (iVar4 != 0) {
            FUN_00355fac(3,1,0);
            FUN_002d7878(1,3,1,0x7f,0xf);
            FUN_00356058(3,0xffff,1,0);
            FUN_002d7854(1,3,0);
          }
        }
        else if (uVar6 == 1) {
          FUN_003655d0(3,10);
          if (param_1 == 3) {
            param_1 = 0;
          }
          *(undefined *)(iVar1 + 0xd) = 0;
          *(undefined4 *)(iVar1 + 0x6c) = uVar2;
          FUN_00355fac(0,3,0x7f);
          FUN_0033c9fc(0);
        }
        cVar3 = (char)param_1 + -0x80;
      }
      *(char *)(iVar1 + 0xc) = cVar3;
      return;
    }
    FUN_00356018(0,2,param_1);
    *(char *)(iVar1 + 0xc) = (char)param_1;
    FUN_0033c9fc(0);
    FUN_003655d0(3,0x1e);
    *(undefined4 *)(iVar1 + 0x6c) = uVar2;
  }
  return;
}

