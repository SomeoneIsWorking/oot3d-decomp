// OoT3D decomp @ 001a8158  name=FUN_001a8158  size=676

void FUN_001a8158(undefined4 param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  int iVar5;
  undefined4 uVar6;
  int unaff_r7;
  undefined1 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  bool in_ZR;
  uint in_fpscr;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;

  if (!in_ZR) {
    param_1 = FUN_00347258();
  }
  *(undefined4 *)(unaff_r11 + 0x70c) = param_1;
  puVar2 = puRam001a8300;
  uVar1 = (undefined1)unaff_r10;
  *(undefined1 *)(puRam001a8300 + 2) = uVar1;
  *puVar2 = unaff_r6;
  *(undefined4 *)(unaff_r9 + 0xa0) = unaff_r10;
  puVar2 = *(undefined4 **)(unaff_r9 + 0x20);
  *puVar2 = *(undefined4 *)(unaff_r4 + 0x644);
  puVar2[0x21c1] = unaff_r5;
  func_0x00353d24();
  *(undefined1 *)(unaff_r4 + 0x123) = 0x33;
  uVar3 = *(undefined4 *)(unaff_r4 + 0x644);
  func_0x00358ef8(uVar3,1);
  FUN_00353e78(uVar3);
  if ((*(ushort *)(unaff_r7 + 0xfa) & 0x20) == 0) {
    *(undefined4 *)(unaff_r4 + 0x1a4) = uRam001a876c;
    *(int *)(unaff_r4 + 0x2c) = (int)unaff_d8;
    *(undefined1 *)(unaff_r4 + 0x5bc) = uVar1;
    *(uint *)(unaff_r4 + 4) = *(uint *)(unaff_r4 + 4) & 0xfffffffe;
  }
  else {
    func_0x0036e3a8();
    *(int *)(unaff_r4 + 0x28) = (int)((ulonglong)unaff_d10 >> 0x20);
    *(int *)(unaff_r4 + 0x2c) = (int)unaff_d9;
    uVar3 = uRam001a8308;
    *(int *)(unaff_r4 + 0x30) = (int)((ulonglong)unaff_d8 >> 0x20);
    func_0x0036ec40(0,uVar3);
    iVar4 = func_0x0035b164();
    if ((iVar4 != 0) && (iVar4 = func_0x0035b0a0(), iVar4 == 0)) {
      if (((*puRam001a8250 & 1) == 0) && (iVar4 = func_0x003679b4(puRam001a8250), iVar4 != 0)) {
        func_0x0036788c(uRam001a8254);
      }
      func_0x003542c4(uRam001a8768,1);
    }
  }
  func_0x00370350(unaff_r4 + 0x5c0,0xb);
  iVar4 = iRam001a8770;
  iVar5 = 0;
  if (*(int *)(*(int *)(unaff_r9 + 0x20) + 0x8708) == 0) {
    *(int *)(*(int *)(unaff_r9 + 0x20) + 0x8708) = unaff_r4;
  }
  do {
    uVar3 = func_0x00371178(*(undefined4 *)(unaff_r9 + 0x20),0,0x14);
    *(undefined4 *)(iVar4 + iVar5 * 4) = uVar3;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xd);
  *(int *)(iVar4 + 0x70) = unaff_r5;
  uVar3 = uRam001a8774;
  *(undefined1 *)(iVar4 + 0x69) = uVar1;
  *(undefined4 *)(iVar4 + 0x6c) = uVar3;
  *(undefined1 *)(iVar4 + 0x74) = uVar1;
  uVar6 = *(undefined4 *)(*(int *)(unaff_r4 + 0x5e8) + 0x10);
  uVar3 = func_0x00372f0c(*(undefined4 *)(unaff_r4 + 0x5c4),2);
  *(undefined4 *)(unaff_r4 + 0x64c) = uVar6;
  func_0x00372d94((undefined4 *)(unaff_r4 + 0x64c),uVar3);
  uVar6 = *(undefined4 *)(*(int *)(unaff_r4 + 0x5e8) + 0x10);
  uVar3 = func_0x00372f0c(*(undefined4 *)(unaff_r4 + 0x5c4),1);
  *(undefined4 *)(unaff_r4 + 0x6e4) = uVar6;
  func_0x00372d94((undefined4 *)(unaff_r4 + 0x6e4),uVar3);
  *(undefined1 *)(unaff_r4 + 0x6f4) = unaff_r8;
  *(undefined1 *)(unaff_r4 + 0x5bc) = unaff_r8;
  iVar4 = iRam001a88e4;
  uVar3 = VectorUnsignedToFloat((uint)*(byte *)(unaff_r5 + 0xa82),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(unaff_r4 + 0x22c) = uVar3;
  uVar3 = VectorUnsignedToFloat((uint)*(byte *)(unaff_r5 + 0xa83),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(unaff_r4 + 0x230) = uVar3;
  uVar3 = VectorUnsignedToFloat((uint)*(byte *)(unaff_r5 + 0xa84),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(unaff_r4 + 0x234) = uVar3;
  uVar3 = VectorUnsignedToFloat((uint)*(ushort *)(iVar4 + unaff_r5),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(unaff_r4 + 0x238) = uVar3;
  *(int *)(unaff_r4 + 0x23c) = (int)((ulonglong)unaff_d9 >> 0x20);
  *(undefined1 *)(unaff_r4 + 0x19b) = 4;
  return;
}
