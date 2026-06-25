// OoT3D decomp @ 0037547c  name=FUN_0037547c  size=640

void FUN_0037547c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  undefined auStack_4c [12];
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  iVar4 = FUN_002dd3f4(param_1);
  if (*(char *)(DAT_003756fc + iVar4) == '\0') {
    iVar5 = FUN_002ddfb0(local_34);
    iVar6 = FUN_002dcee0(iVar4,local_34);
    uVar2 = *(ushort *)(*(int *)(DAT_00375700 + iVar4 * 4) + iVar6 * 4 + 2);
    uVar1 = *(undefined *)(DAT_00375704 + iVar4);
    iVar6 = FUN_0030f0ec();
    FUN_00488374(*(undefined4 *)(iVar6 + 4),local_34,auStack_4c);
    if (iVar5 == 0) {
      if (((((uVar2 & 0x20) == 0) || (iVar5 = FUN_004534e0(local_30,local_34), iVar5 == 0)) &&
          (((uVar2 & 0x100) == 0 || (iVar5 = FUN_00453684(local_34), iVar5 != 0)))) &&
         ((iVar5 = FUN_002bff8c(local_30,local_34), iVar5 != 0 ||
          (iVar5 = FUN_002bfdb0(local_30,iVar4,uVar1,local_40), iVar5 != 0)))) {
        if ((uVar2 & 0xc0) != 0) {
          uVar3 = uVar2 & 0xc0;
          if (uVar3 == 0x40) {
            uVar7 = *DAT_00375708 * DAT_00375710 + (*DAT_00375708 >> 1);
            *DAT_00375708 = uVar7;
            fVar8 = (float)VectorUnsignedToFloat(uVar7 & 0xf,(byte)(in_fpscr >> 0x15) & 3);
          }
          else if (uVar3 == 0x80) {
            uVar7 = *DAT_00375708 * DAT_00375710 + (*DAT_00375708 >> 1);
            *DAT_00375708 = uVar7;
            fVar8 = (float)VectorUnsignedToFloat(uVar7 & 0x1f,(byte)(in_fpscr >> 0x15) & 3);
          }
          else {
            fVar8 = DAT_0037570c;
            if (uVar3 == 0xc0) {
              uVar7 = *DAT_00375708 * DAT_00375710 + (*DAT_00375708 >> 1);
              *DAT_00375708 = uVar7;
              fVar8 = (float)VectorUnsignedToFloat(uVar7 & 0x3f,(byte)(in_fpscr >> 0x15) & 3);
            }
          }
          *(float *)(iVar5 + 0x94) = DAT_00375718 + fVar8 * DAT_00375714;
        }
        FUN_00452fd4(iVar5,local_34,0);
        *(undefined4 *)(iVar5 + 0x8c) = param_5;
        *(undefined4 *)(iVar5 + 0x90) = param_6;
        *(undefined4 *)(iVar5 + 0x88) = param_4;
        if ((uVar2 & 0x4000) != 0) {
          *(undefined *)(iVar5 + 0x98) = 1;
        }
        if ((uVar2 & 8) != 0) {
          *(undefined *)(iVar5 + 0x99) = 1;
          FUN_00355fac(0,2,0x28,0xf);
          return;
        }
      }
    }
    else {
      iVar5 = FUN_002bff8c(local_30,local_34);
      if (iVar5 == 0) {
        iVar5 = FUN_002bfdb0(local_30,iVar4,uVar1,local_40);
        if (iVar5 == 0) {
          return;
        }
        *(undefined4 *)(iVar5 + 0x8c) = param_5;
        *(undefined4 *)(iVar5 + 0x90) = param_6;
        *(undefined4 *)(iVar5 + 0x88) = param_4;
        if ((uVar2 & 0x4000) != 0) {
          *(undefined *)(iVar5 + 0x98) = 1;
        }
        if ((uVar2 & 8) != 0) {
          *(undefined *)(iVar5 + 0x99) = 1;
          FUN_00355fac(0,2,0x28,0xf);
          FUN_00355fac(3,2,0x28,0xf);
          FUN_0033c98c(0x28,0xf);
        }
      }
      FUN_00453050(iVar5,local_34,0);
    }
  }
  return;
}

