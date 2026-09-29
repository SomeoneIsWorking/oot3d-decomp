// OoT3D decomp @ 0011d284  name=FUN_0011d284  size=668

void FUN_0011d284(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint in_fpscr;
  float local_30;
  undefined4 local_2c;
  float local_28;

  FUN_003731e0(param_1 + 0x1d4);
  uVar2 = DAT_0011d524;
  uVar8 = DAT_0011d520;
  sVar1 = *(short *)(param_1 + 0x25e);
  if (sVar1 == 0) {
    iVar4 = FUN_003736fc(DAT_0011d524,DAT_0011d524,param_1 + 0x1d4);
    if (iVar4 != 0) {
      if (*(short *)(param_1 + 0x1c) == 1) {
        FUN_00375bcc(param_1,DAT_0011d528);
      }
      else {
        FUN_00375bcc(param_1,DAT_0011d52c);
      }
    }
    FUN_00370378(param_1 + 0xbc,0,DAT_0011d530);
    iVar4 = DAT_0011d538;
    sVar1 = (short)(int)(*(float *)(param_1 + 0x210) * DAT_0011d534);
    uVar5 = FUN_00370378(param_1 + 0x262,DAT_0011d538,(int)(short)(sVar1 + 0x38e));
    uVar6 = FUN_00370378(param_1 + 0x264,iVar4,(int)(short)(sVar1 - (short)(iVar4 >> 1)));
    uVar7 = FUN_00370378(param_1 + 0x266,iVar4,(int)(short)(sVar1 - (short)iVar4));
    if ((uVar7 & uVar5 & 1 & uVar6) != 0) {
      FUN_003660fc(DAT_0011d53c,param_1 + 0x1d4,0);
      local_30 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      fVar3 = DAT_0011d540;
      local_30 = local_30 * DAT_0011d540;
      local_2c = uVar8;
      local_28 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      local_28 = local_28 * fVar3;
      FUN_00366150(param_2,param_1 + 0x28,&local_30,DAT_0011d54c,DAT_0011d548 + -4,DAT_0011d548,1,
                   (int)(short)(int)(*(float *)(param_1 + 0x3a0) * DAT_0011d544));
      *(undefined2 *)(param_1 + 0x25e) = 1;
      *(byte *)(param_1 + 0x3b9) = *(byte *)(param_1 + 0x3b9) | 1;
    }
  }
  else if (sVar1 < 0x11) {
    *(short *)(param_1 + 0x25e) = sVar1 + 1;
    if ((5 < (short)(sVar1 + 1)) && (iVar4 = FUN_0036f18c(param_1,0x16c), iVar4 == 0)) {
      FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),0xf,DAT_0011d55c);
    }
    iVar4 = FUN_003736fc(uVar8,uVar2,param_1 + 0x1d4);
    if ((iVar4 != 0) || (iVar4 = FUN_003736fc(DAT_0011d560,uVar2,param_1 + 0x1d4), iVar4 != 0)) {
      if (*(short *)(param_1 + 0x1c) == 1) {
        FUN_00375bcc(param_1,DAT_0011d564);
      }
      else {
        FUN_00375bcc(param_1,DAT_0011d568);
      }
    }
  }
  else {
    uVar8 = FUN_0036ae14(param_1 + 0x1d4,1);
    uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar2,DAT_0011d554,uVar8,DAT_0011d550,param_1 + 0x1d4,1,2);
    *(undefined2 *)(param_1 + 0x25e) = 0;
    *(undefined4 *)(param_1 + 600) = DAT_0011d558;
  }
  FUN_00366044(param_1);
  return;
}
