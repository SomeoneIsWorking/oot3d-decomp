// OoT3D decomp @ 0033c9fc  name=FUN_0033c9fc  size=244

void FUN_0033c9fc(ushort param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_28;
  
  local_28 = DAT_0033caf0;
  iVar2 = FUN_0032c800(1);
  if ((iVar2 == 0) && (iVar2 = FUN_00366684(3), iVar2 != DAT_0033caf4)) {
    uVar5 = 0;
    do {
      if (uVar5 == 0) {
        uVar1 = param_1 & 0xff;
      }
      else {
        uVar1 = 0x7f - param_1 & 0xff;
      }
      uVar4 = 0;
      if (uVar1 < 0x65) {
        if (uVar1 < 0x14) {
          uVar6 = 2;
        }
        else {
          iVar2 = (short)(uVar1 - 0x14) * 0xcd;
          uVar6 = ((iVar2 >> 0xb) - (iVar2 >> 0x1f)) + 2U & 0xff;
        }
      }
      else {
        uVar6 = 0xb;
      }
      uVar3 = 0;
      do {
        iVar2 = FUN_0047d7e4(*(undefined *)((int)&local_28 + uVar5),uVar3);
        if (iVar2 < (int)uVar6) {
          uVar4 = uVar4 + (1 << uVar3);
        }
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < 0x10);
      FUN_00356058(*(undefined *)((int)&local_28 + uVar5),uVar4,1,0x1e);
      FUN_00356058(*(undefined *)((int)&local_28 + uVar5),uVar4 ^ 0xffff,0,0x1e);
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 2);
  }
  return;
}

