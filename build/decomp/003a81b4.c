// OoT3D decomp @ 003a81b4  name=FUN_003a81b4  size=472

void FUN_003a81b4(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  short local_24 [2];
  int local_20;

  uVar2 = DAT_003a838c;
  *(undefined4 *)(param_1 + 0x6c) = DAT_003a838c;
  FUN_0031d314();
  FUN_00326a6c(param_1 + 0xec8,&local_20,local_24);
  iVar3 = DAT_003a8394;
  if (DAT_003a8390 < local_20) {
    iVar4 = FUN_00326b20(param_1,param_2);
    if (iVar4 == 0) {
      FUN_003478b0(uVar2,param_1 + 0x1c4);
      *(undefined4 *)(param_1 + 0xe78) = uVar2;
      FUN_00357d6c(param_1);
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffefff;
    }
    else {
      uVar6 = FUN_00338f60((int)local_24[0]);
      if (uVar6 < 0xbf000000) {
        iVar4 = FUN_00338f60((int)local_24[0]);
        if (iVar3 < iVar4) {
          FUN_00318778(param_1);
        }
        else {
          iVar4 = (int)local_24[0];
          fVar7 = DAT_003a839c;
          if ((DAT_003a8398 <= iVar4) && (fVar7 = DAT_003a83a4, iVar4 <= DAT_003a83a0)) {
            fVar7 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
          }
          sVar1 = (short)(int)fVar7 + *(short *)(param_1 + 0x36);
          *(short *)(param_1 + 0x36) = sVar1;
          *(short *)(param_1 + 0xbe) = sVar1;
        }
      }
      else {
        FUN_00318814(param_1);
      }
    }
  }
  iVar4 = FUN_003731e0(param_1 + 0x1c4);
  if (iVar4 != 0) {
    iVar4 = FUN_00338f60((int)local_24[0]);
    if (iVar3 < iVar4) {
      FUN_003478b0(uVar2,param_1 + 0x1c4);
      *(undefined4 *)(param_1 + 0xe78) = uVar2;
      FUN_00357d6c(param_1);
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffefff;
      return;
    }
    *(undefined1 *)(param_1 + 0x1a4) = 7;
    *(undefined4 *)(param_1 + 0xe7c) = 0;
    *(undefined1 *)(param_1 + 0xe74) = 4;
    iVar3 = DAT_003a83a8;
    uVar5 = FUN_0036ae14(param_1 + 0x1c4,
                         *(undefined4 *)
                          (*(int *)(DAT_003a83a8 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x10));
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003a83b0,uVar2,uVar5,DAT_003a83ac,param_1 + 0x1c4,
                 *(undefined4 *)
                  (*(int *)(iVar3 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                  (uint)*(byte *)(param_1 + 0xe74) * 4),2);
  }
  return;
}
