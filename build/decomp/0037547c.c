// OoT3D decomp @ 0037547c  name=FUN_0037547c  size=640

void FUN_0037547c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  undefined1 auStack_4c [12];
  undefined4 uStack_40;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  iVar4 = func_0x002dd3f4(param_1);
  if (*(char *)(iRam003756fc + iVar4) == '\0') {
    iVar5 = func_0x002ddfb0(uStack_34);
    iVar6 = func_0x002dcee0(iVar4,uStack_34);
    uVar2 = *(ushort *)(*(int *)(iRam00375700 + iVar4 * 4) + iVar6 * 4 + 2);
    uVar1 = *(undefined1 *)(iRam00375704 + iVar4);
    iVar6 = func_0x0030f0ec();
    func_0x00488374(*(undefined4 *)(iVar6 + 4),uStack_34,auStack_4c);
    if (iVar5 == 0) {
      if (((((uVar2 & 0x20) == 0) || (iVar5 = func_0x004534e0(uStack_30,uStack_34), iVar5 == 0)) &&
          (((uVar2 & 0x100) == 0 || (iVar5 = func_0x00453684(uStack_34), iVar5 != 0)))) &&
         ((iVar5 = func_0x002bff8c(uStack_30,uStack_34), iVar5 != 0 ||
          (iVar5 = func_0x002bfdb0(uStack_30,iVar4,uVar1,uStack_40), iVar5 != 0)))) {
        if ((uVar2 & 0xc0) != 0) {
          uVar3 = uVar2 & 0xc0;
          if (uVar3 == 0x40) {
            uVar7 = *puRam00375708 * iRam00375710 + (*puRam00375708 >> 1);
            *puRam00375708 = uVar7;
            fVar8 = (float)VectorUnsignedToFloat(uVar7 & 0xf,(byte)(in_fpscr >> 0x15) & 3);
          }
          else if (uVar3 == 0x80) {
            uVar7 = *puRam00375708 * iRam00375710 + (*puRam00375708 >> 1);
            *puRam00375708 = uVar7;
            fVar8 = (float)VectorUnsignedToFloat(uVar7 & 0x1f,(byte)(in_fpscr >> 0x15) & 3);
          }
          else {
            fVar8 = fRam0037570c;
            if (uVar3 == 0xc0) {
              uVar7 = *puRam00375708 * iRam00375710 + (*puRam00375708 >> 1);
              *puRam00375708 = uVar7;
              fVar8 = (float)VectorUnsignedToFloat(uVar7 & 0x3f,(byte)(in_fpscr >> 0x15) & 3);
            }
          }
          *(float *)(iVar5 + 0x94) = fRam00375718 + fVar8 * fRam00375714;
        }
        func_0x00452fd4(iVar5,uStack_34,0);
        *(undefined4 *)(iVar5 + 0x8c) = param_5;
        *(undefined4 *)(iVar5 + 0x90) = param_6;
        *(undefined4 *)(iVar5 + 0x88) = param_4;
        if ((uVar2 & 0x4000) != 0) {
          *(undefined1 *)(iVar5 + 0x98) = 1;
        }
        if ((uVar2 & 8) != 0) {
          *(undefined1 *)(iVar5 + 0x99) = 1;
          func_0x00355fac(0,2,0x28,0xf);
          return;
        }
      }
    }
    else {
      iVar5 = func_0x002bff8c(uStack_30,uStack_34);
      if (iVar5 == 0) {
        iVar5 = func_0x002bfdb0(uStack_30,iVar4,uVar1,uStack_40);
        if (iVar5 == 0) {
          return;
        }
        *(undefined4 *)(iVar5 + 0x8c) = param_5;
        *(undefined4 *)(iVar5 + 0x90) = param_6;
        *(undefined4 *)(iVar5 + 0x88) = param_4;
        if ((uVar2 & 0x4000) != 0) {
          *(undefined1 *)(iVar5 + 0x98) = 1;
        }
        if ((uVar2 & 8) != 0) {
          *(undefined1 *)(iVar5 + 0x99) = 1;
          func_0x00355fac(0,2,0x28,0xf);
          func_0x00355fac(3,2,0x28,0xf);
          func_0x0033c98c(0x28,0xf);
        }
      }
      func_0x00453050(iVar5,uStack_34,0);
    }
  }
  return;
}

