// OoT3D decomp @ 001ec5b8  name=FUN_001ec5b8  size=776

void FUN_001ec5b8(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  uVar7 = uRam001ec7a4;
  iVar5 = iRam001ec7a0;
  if (param_2 == 0xe) {
    if (((*(uint *)(iRam001ec7a0 + 0x14) & 1) == 0) &&
       (iVar4 = func_0x003679b4(iRam001ec7a0 + 0x14), puVar1 = puRam001ec7ac, iVar4 != 0)) {
      *puRam001ec7ac = uRam001ec7a8;
      puVar1[1] = uVar7;
      puVar1[2] = uVar7;
    }
    uVar8 = uRam001ec7b0;
    if (((*(uint *)(iVar5 + 0x10) & 1) == 0) &&
       (iVar4 = func_0x003679b4(uRam001ec7b4), puVar1 = puRam001ec7b8, iVar4 != 0)) {
      *puRam001ec7b8 = uVar8;
      puVar1[1] = uVar7;
      puVar1[2] = uVar7;
    }
    if (((*(uint *)(iVar5 + 0xc) & 1) == 0) &&
       (iVar4 = func_0x003679b4(uRam001ec7bc), puVar1 = puRam001ec7c8, uVar3 = uRam001ec7c4,
       uVar2 = uRam001ec7c0, iVar4 != 0)) {
      *puRam001ec7c8 = uVar8;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
    }
    uVar2 = uRam001ec7cc;
    if (((*(uint *)(iVar5 + 8) & 1) == 0) &&
       (iVar4 = func_0x003679b4(uRam001ec7d0), puVar1 = puRam001ec7d4, iVar4 != 0)) {
      *puRam001ec7d4 = uVar8;
      puVar1[1] = uVar2;
      puVar1[2] = uVar7;
    }
    if (((*(uint *)(iVar5 + 4) & 1) == 0) &&
       (iVar5 = func_0x003679b4(uRam001ec7d8), puVar1 = puRam001ec7e0, uVar7 = uRam001ec7dc,
       iVar5 != 0)) {
      *puRam001ec7e0 = uVar8;
      puVar1[1] = uVar2;
      puVar1[2] = uVar7;
    }
    func_0x003735ac(param_4 + 0x3c,param_3,puRam001ec7ac);
    func_0x003735ac(param_4 + 0x328,param_3,puRam001ec7b8);
    func_0x003735ac(param_4 + 0x4cc,param_3,puRam001ec7c8);
    func_0x003735ac(param_4 + 0x668,param_3,puRam001ec7d4);
    func_0x003735ac(param_4 + 0x804,param_3,puRam001ec7e0);
  }
  puVar1 = puRam00357870;
  iVar5 = 0;
  if (0 < *(int *)(param_4 + 0x8a4)) {
    do {
      if (*(byte *)(*(int *)(param_4 + 0x8a8) + iVar5 * 0x50 + 0x4c) == param_2) {
        puVar6 = (undefined4 *)(*(int *)(param_4 + 0x8a8) + iVar5 * 0x50 + 0x28);
        uVar7 = puVar6[1];
        uVar8 = puVar6[2];
        *puVar1 = *puVar6;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        func_0x003735ac(puRam00357874,param_3,puVar1);
        puVar6 = puRam00357874;
        *(undefined4 *)(*(int *)(param_4 + 0x8a8) + iVar5 * 0x50 + 0x38) = *puRam00357874;
        *(undefined4 *)(*(int *)(param_4 + 0x8a8) + iVar5 * 0x50 + 0x3c) = puVar6[1];
        *(undefined4 *)(*(int *)(param_4 + 0x8a8) + iVar5 * 0x50 + 0x40) = puVar6[2];
        iVar4 = *(int *)(param_4 + 0x8a8);
        *(float *)(iVar4 + iVar5 * 0x50 + 0x44) =
             *(float *)(iVar5 * 0x50 + 0x34 + iVar4) * *(float *)(iVar5 * 0x50 + 0x48 + iVar4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_4 + 0x8a4));
  }
  return;
}
