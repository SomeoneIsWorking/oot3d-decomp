// OoT3D decomp @ 002ac04c  name=FUN_002ac04c  size=452

void FUN_002ac04c(undefined4 param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r6;
  bool in_ZR;

  if (!in_ZR) {
    param_1 = FUN_00347258();
  }
  *(undefined4 *)(unaff_r4 + 0x230) = param_1;
  func_0x00340e14();
  uVar2 = func_0x00372f0c();
  func_0x00372d94(*(undefined4 *)(*(int *)(unaff_r4 + 0x228) + 0xc),uVar2);
  *(undefined1 *)(*(int *)(*(int *)(unaff_r4 + 0x228) + 0xc) + 0x10) = 1;
  uVar2 = func_0x00372f0c();
  func_0x00372d94(*(undefined4 *)(*(int *)(unaff_r4 + 0x224) + 0xc),uVar2);
  *(undefined1 *)(*(int *)(*(int *)(unaff_r4 + 0x224) + 0xc) + 0x10) = 1;
  FUN_00350eb8();
  FUN_00350d48();
  iVar3 = func_0x0036e864();
  if (iVar3 == 0) {
    *(undefined4 *)(unaff_r4 + 0x1a4) = uRam002ac1f0;
    *(byte *)(unaff_r4 + 0x21e) = *(byte *)(unaff_r4 + 0x21e) & 0xf8 | 3;
    *(undefined2 *)(unaff_r4 + 0x21c) = 0;
  }
  else {
    *(undefined4 *)(unaff_r4 + 0x1a4) = 0;
    *(undefined4 *)(unaff_r4 + 0x218) = uRam002ac1ec;
    *(byte *)(unaff_r4 + 0x21e) = *(byte *)(unaff_r4 + 0x21e) & 0xf8 | 4;
    *(uint *)(unaff_r4 + 4) = *(uint *)(unaff_r4 + 4) & 0xfffffffe;
    func_0x003738d0(*(undefined4 *)(unaff_r4 + 0x28),*(undefined4 *)(unaff_r4 + 0x2c),
                    *(undefined4 *)(unaff_r4 + 0x30),unaff_r6 + 0x208c);
  }
  fVar1 = fRam002ac1f4;
  *(undefined4 *)(unaff_r4 + 0x3c) = *(undefined4 *)(unaff_r4 + 0x28);
  *(float *)(unaff_r4 + 0x40) = *(float *)(unaff_r4 + 0x2c) + fVar1;
  *(undefined4 *)(unaff_r4 + 0x44) = *(undefined4 *)(unaff_r4 + 0x30);
  *(undefined2 *)(unaff_r4 + 0x48) = *(undefined2 *)(unaff_r4 + 0x34);
  *(undefined2 *)(unaff_r4 + 0x4a) = *(undefined2 *)(unaff_r4 + 0x36);
  *(undefined2 *)(unaff_r4 + 0x4c) = *(undefined2 *)(unaff_r4 + 0x38);
  return;
}
