// OoT3D decomp @ 003f9f68  name=FUN_003f9f68  size=544

void FUN_003f9f68(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [48];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;

  uVar3 = uRam003fa18c;
  uVar5 = uRam003fa188;
  iVar6 = 0;
  puVar1 = puRam003fa194;
  puVar2 = puRam003fa190;
  if (0 < *(int *)(*param_2 + 0xc)) {
    do {
      if (iVar6 < *(int *)(*param_2 + 0xc)) {
        iStack_fc = iVar6 * 0x18 + 0x58 + *param_2;
      }
      else {
        iStack_fc = 0;
      }
      if ((iVar6 == 0) && (*(char *)(*(int *)(param_1 + 0x10) + 0x1b5) != '\0')) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0x1a8);
        uStack_68 = *(undefined4 *)(iVar4 + 0x30);
        uStack_64 = *(undefined4 *)(iVar4 + 0x34);
        uStack_60 = *(undefined4 *)(iVar4 + 0x38);
        uStack_5c = *(undefined4 *)(iVar4 + 0x3c);
        uStack_58 = *(undefined4 *)(iVar4 + 0x40);
        uStack_54 = *(undefined4 *)(iVar4 + 0x44);
        uStack_50 = *(undefined4 *)(iVar4 + 0x48);
        uStack_4c = *(undefined4 *)(iVar4 + 0x4c);
        uStack_48 = *(undefined4 *)(iVar4 + 0x50);
        uStack_44 = *(undefined4 *)(iVar4 + 0x54);
        uStack_40 = *(undefined4 *)(iVar4 + 0x58);
        uStack_3c = *(undefined4 *)(iVar4 + 0x5c);
        uStack_38 = *(undefined4 *)(iVar4 + 0x60);
        uStack_34 = *(undefined4 *)(iVar4 + 100);
        uStack_30 = *(undefined4 *)(iVar4 + 0x68);
        uStack_2c = *(undefined4 *)(iVar4 + 0x6c);
      }
      else {
        func_0x003143a8(&iStack_fc,auStack_f8 + iVar6 * 0x30);
        if (iVar6 == 0) {
          func_0x00372224(&uStack_13c,auStack_f8);
          uStack_104 = uVar5;
          uStack_108 = uVar5;
          uStack_10c = uVar5;
          uStack_100 = uVar3;
          uStack_68 = uStack_13c;
          uStack_64 = uStack_138;
          uStack_60 = uStack_134;
          uStack_5c = uStack_130;
          uStack_58 = uStack_12c;
          uStack_54 = uStack_128;
          uStack_50 = uStack_124;
          uStack_4c = uStack_120;
          uStack_48 = uStack_11c;
          uStack_44 = uStack_118;
          uStack_40 = uStack_114;
          uStack_3c = uStack_110;
          uStack_38 = uVar5;
          uStack_34 = uVar5;
          uStack_30 = uVar5;
          uStack_2c = uVar3;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(*param_2 + 0xc));
    puVar1 = puRam003fa194;
    puVar2 = puRam003fa190;
    if (2 < iVar6) goto LAB_003fa130;
  }
  do {
    if (((*puVar2 & 1) == 0) && (iVar4 = func_0x003679b4(puRam003fa190), iVar4 != 0)) {
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar1[2] = uVar5;
      puVar1[3] = uVar5;
      puVar1[4] = uVar5;
      puVar1[5] = uVar3;
      puVar1[6] = uVar5;
      puVar1[7] = uVar5;
      puVar1[8] = uVar5;
      puVar1[9] = uVar5;
      puVar1[10] = uVar3;
      puVar1[0xb] = uVar5;
    }
    func_0x00372224(auStack_f8 + iVar6 * 0x30,puRam003fa194);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
LAB_003fa130:
  uVar5 = func_0x00314870(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x84);
  *(int *)(param_1 + 0x84) = iVar6 + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x80) + iVar6 * 4) = uVar5;
  func_0x00409040(param_1 + 0x24,&uStack_68);
  func_0x0031432c(param_1 + 0x24,1,auStack_c8);
  func_0x0031432c(param_1 + 0x24,2,auStack_98);
  return;
}
