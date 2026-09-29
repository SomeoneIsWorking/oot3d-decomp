// OoT3D decomp @ 002e4ea0  name=FUN_002e4ea0  size=304

void FUN_002e4ea0(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_230 [524];

  iVar1 = DAT_002e4fd0;
  pbVar3 = param_1 + 4;
  iVar5 = 0;
  if (*param_1 != 0) {
    do {
      if (*(short *)pbVar3 < 0) {
        if (*(int *)(pbVar3 + 0xc) == 0) {
          iVar6 = iVar1 + *(short *)pbVar3 * -0x44;
          if (*(int *)(iVar6 + 0x40) == 0) {
            uVar2 = FUN_00324fd0(iVar6);
            *(undefined4 *)(iVar6 + 0x40) = uVar2;
          }
          uVar7 = *(undefined4 *)(iVar6 + 0x40);
          *(undefined4 *)(pbVar3 + 8) = uVar7;
          uVar2 = FUN_0035010c(uVar7);
          *(undefined4 *)(pbVar3 + 4) = uVar2;
          iVar4 = (int)-*(short *)pbVar3;
          if (iVar4 == 0x14 || iVar4 == 0x15) {
            iVar4 = 0;
          }
          FUN_00324f44(auStack_230,iVar6,DAT_002e4fd4);
          uVar2 = FUN_00324eac(auStack_230,uVar2,uVar7,iVar4,0);
          *(undefined4 *)(pbVar3 + 0xc) = uVar2;
        }
        else {
          iVar6 = FUN_0031b9c0(*(int *)(pbVar3 + 0xc),0);
          if (iVar6 != 0) {
            FUN_0031b99c(*(undefined4 *)(pbVar3 + 0xc));
            pbVar3[0xc] = 0;
            pbVar3[0xd] = 0;
            pbVar3[0xe] = 0;
            pbVar3[0xf] = 0;
            *(short *)pbVar3 = -*(short *)pbVar3;
            if (*(int *)(pbVar3 + 8) != 0) {
              ObjectBankArchive_0031b124
                        (pbVar3 + 0x10,*(undefined4 *)(pbVar3 + 4),*(int *)(pbVar3 + 8),0);
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      pbVar3 = pbVar3 + 0x80;
    } while (iVar5 < (int)(uint)*param_1);
  }
  return;
}
