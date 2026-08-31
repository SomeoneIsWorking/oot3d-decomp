// OoT3D decomp @ 00409184  name=FUN_00409184  size=508

void FUN_00409184(int param_1,int *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  int iStack_334;
  undefined1 auStack_1b0 [156];
  undefined1 auStack_114 [8];
  undefined1 auStack_10c [192];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint auStack_44 [8];

  puVar3 = (undefined4 *)(param_1 + 0x24);
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x2c);
  uVar8 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x30);
  auStack_44[0] = *puRam00409380;
  auStack_44[1] = puRam00409380[1];
  auStack_44[2] = puRam00409380[2];
  auStack_44[3] = puRam00409380[3];
  auStack_44[4] = puRam00409380[4];
  auStack_44[5] = puRam00409380[5];
  auStack_44[6] = (uint)*(ushort *)(*param_2 + 0x104);
  auStack_44[7] = auStack_44[6];
  func_0x004094f4(&uStack_344);
  uVar9 = 0;
  uStack_33c = 8;
  uStack_344 = uVar7;
  uStack_340 = uVar8;
  do {
    uVar1 = 1 << (uVar9 & 0xff);
    if ((uVar1 & 0xff & (uint)*(ushort *)(param_2 + 2)) == 0) {
      func_0x00313650(&uStack_344,uVar9);
    }
    else {
      iVar4 = *param_2;
      uVar5 = uVar9 & 0xff;
      if ((uVar1 & 0xff & (uint)*(ushort *)(iRam00409384 + iVar4)) == 0) {
        uVar2 = *(undefined2 *)(iVar4 + uVar5 * 0x1c + 0x2c);
        iVar6 = param_2[uVar5 + 10];
        iVar4 = *(int *)(iVar4 + uVar5 * 0x1c + 0x24);
        uVar7 = func_0x003136e4(auStack_44[uVar9],uVar2);
        uVar8 = func_0x004094b4(auStack_44[uVar9],uVar2);
        func_0x00313698(&uStack_344,uVar9,uVar8,uVar7,iVar4 + iVar6);
      }
      else {
        func_0x0040950c(&uStack_344,uVar9,iVar4 + uVar5 * 0x1c + 0x30);
      }
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 8);
  func_0x00313864(&uStack_344);
  func_0x00307bd8(*puVar3,0x200,0x27,1,0xf,auStack_1b0);
  func_0x00307bd8(*puVar3,uRam00409388,2,1,0xf,auStack_114);
  uVar7 = uRam0040938c;
  iVar4 = 0;
  if (0 < iStack_334) {
    do {
      func_0x00307bd8(*puVar3,uVar7,4,1,0xf,auStack_10c + iVar4 * 0x10);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iStack_334);
  }
  *(undefined4 *)(param_1 + 0x44) = uStack_4c;
  *(undefined4 *)(param_1 + 0x48) = uStack_48;
  return;
}
