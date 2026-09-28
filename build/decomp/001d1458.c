// OoT3D decomp @ 001d1458  name=FUN_001d1458  size=364

void FUN_001d1458(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r6;
  int iVar3;
  uint *unaff_r9;
  bool in_ZR;
  undefined4 unaff_s16;

  if (!in_ZR) {
    param_1 = FUN_00347258();
  }
  *(undefined4 *)(unaff_r6 + 0xadc) = param_1;
  func_0x0033e2a0();
  iVar3 = 0;
  do {
    if (((*unaff_r9 & 1) == 0) && (iVar2 = func_0x003679b4(uRam001d10c4), iVar2 != 0)) {
      func_0x0036788c(iRam001d10e4);
    }
    **(undefined4 **)(unaff_r6 + 0xadc) = *(undefined4 *)(iRam001d10e4 + 0x174);
    func_0x00358ef8();
    FUN_00353e78();
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  *(undefined1 *)(unaff_r4 + 0x230) = 1;
  FUN_00372d4c(unaff_r4 + 0xbc,uRam001d10f8);
  *(short *)(iRam001d15d0 + unaff_r4) = (short)uRam001d15cc;
  *(undefined4 *)(unaff_r4 + 0x50) = unaff_s16;
  *(uint *)(unaff_r4 + 4) = *(uint *)(unaff_r4 + 4) & 0xfffffffe;
  uVar1 = uRam0035bac8;
  iVar3 = iRam0035bac4;
  *(undefined4 *)(iRam0035bac4 + *(short *)(unaff_r4 + 0x1c) * 4) = 0;
  *(byte *)(unaff_r4 + 0xefc) = *(byte *)(unaff_r4 + 0xefc) & 0xfc;
  func_0x00370350(uVar1,unaff_r4 + 0x1a4,
                  *(undefined4 *)(iVar3 + 0x10 + *(short *)(unaff_r4 + 0x1c) * 4));
  *(undefined1 *)(unaff_r4 + 0x231) = 0;
  *(undefined2 *)(unaff_r4 + 0x234) = 0x1e;
  *(undefined4 *)(unaff_r4 + 0x22c) = uRam0035bacc;
  return;
}
