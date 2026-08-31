// OoT3D decomp @ 003fb5ec  name=FUN_003fb5ec  size=948

void FUN_003fb5ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [48];

  func_0x0031429c(param_1 + 0x18);
  func_0x003fb9ac(param_1);
  func_0x00314308(param_1 + 0x18,0);
  uStack_68 = *puRam003fb9a0;
  uStack_64 = puRam003fb9a0[1];
  uStack_60 = puRam003fb9a0[2];
  uStack_5c = puRam003fb9a0[3];
  uStack_58 = puRam003fb9a0[4];
  uStack_54 = puRam003fb9a0[5];
  uStack_50 = puRam003fb9a0[6];
  uStack_4c = puRam003fb9a0[7];
  func_0x003142dc(param_1 + 0x18,&uStack_68);
  uVar10 = 0;
  uVar9 = 0;
  do {
    iVar1 = func_0x00313ae8(*(undefined4 *)(param_1 + 0x350),uVar9);
    uVar10 = uVar10 | iVar1 << (uVar9 & 0xff);
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 2);
  uVar9 = 0;
  if (uVar10 != 0) {
    uVar9 = 2;
  }
  uVar5 = 0;
  if ((*(uint *)(*(int *)(param_1 + 0x354) + 0x178) & 0x10) != 0) {
    uVar5 = 0x10;
  }
  uVar6 = *(uint *)(**(int **)(param_1 + 0x350) + 0x1c);
  if ((uVar6 & 8) == 0) {
    uVar7 = 0x20;
  }
  else {
    uVar7 = 0;
  }
  if ((uVar6 & 0x80) == 0) {
    uVar8 = 0x200;
  }
  else {
    uVar8 = 0;
  }
  if (*(char *)(param_1 + 6) == '\0') {
    uVar2 = func_0x00313ad8();
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    uVar2 = func_0x00313ac8(*(undefined4 *)(param_1 + 0x350));
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0x58) = 8;
    uVar2 = uRam003fb9a4;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    uVar3 = func_0x003136e4(3,uVar2);
    uStack_68 = 0;
    func_0x00313698(param_1 + 0x50,0,0xc,uVar3);
    if ((*(uint *)(**(int **)(param_1 + 0x350) + 0x1c) & 0x80) == 0) {
      uVar3 = func_0x0040fd08();
      uVar4 = func_0x003136e4(3,uVar2);
      uStack_68 = uVar3;
      func_0x00313698(param_1 + 0x50,1,0xc,uVar4);
    }
    else {
      func_0x00313650(param_1 + 0x50,1);
    }
    if ((*(uint *)(**(int **)(param_1 + 0x350) + 0x1c) & 8) == 0) {
      uVar3 = func_0x0040fca0();
      uVar4 = func_0x003136e4(4,uVar2);
      uStack_68 = uVar3;
      func_0x00313698(param_1 + 0x50,2,0x10,uVar4);
    }
    else {
      func_0x00313650(param_1 + 0x50,2);
    }
    if ((*(uint *)(**(int **)(param_1 + 0x350) + 0x1c) & 0x10) == 0) {
      uVar3 = func_0x0040fd28();
      uVar4 = func_0x003136e4(2,uVar2);
      uStack_68 = uVar3;
      func_0x00313698(param_1 + 0x50,3,8,uVar4);
    }
    else {
      func_0x00313650(param_1 + 0x50,3);
    }
    if ((*(uint *)(**(int **)(param_1 + 0x350) + 0x1c) & 0x40) == 0) {
      uVar3 = func_0x0040fd70();
      uVar2 = func_0x003136e4(2,uVar2);
      uStack_68 = uVar3;
      func_0x00313698(param_1 + 0x50,4,8,uVar2);
    }
    else {
      func_0x00313650(param_1 + 0x50,4);
    }
    iVar1 = 5;
    do {
      func_0x00313650(param_1 + 0x50,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    func_0x00313864(param_1 + 0x50);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else if ((uVar6 & 0x100) != 0) {
    uVar2 = func_0x00313ad8();
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    uVar2 = func_0x00313ac8(*(undefined4 *)(param_1 + 0x350));
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    func_0x00313864(param_1 + 0x50);
  }
  func_0x004090cc(param_1 + 0x18,param_1 + 0x50);
  func_0x00313d6c(param_1 + 0x18);
  uVar2 = func_0x00313644();
  func_0x00372224(auStack_48,uVar2);
  func_0x0036c174(auStack_48,auStack_48,*(int *)(param_1 + 0x354) + 0xc);
  func_0x003135e8(param_1 + 0x18,auStack_48,3);
  func_0x003135ac(param_1 + 0x18,uVar8 | uVar7 | uVar5 | uVar9 | uVar10 << 6);
  func_0x003142f0(param_1 + 0x18);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x354) + 0x174);
  uStack_68 = 0;
  if ((*(uint *)(**(int **)(param_1 + 0x350) + 0x1c) & 0x20) == 0) {
    func_0x00313444(param_1 + 0x18,5,uVar2,uRam003fb9a8);
    return;
  }
  func_0x00313444(param_1 + 0x18,4,uVar2,uRam003fb9a8);
  return;
}
