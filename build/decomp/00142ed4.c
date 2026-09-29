// OoT3D decomp @ 00142ed4  name=FUN_00142ed4  size=596

void FUN_00142ed4(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  short local_30 [2];
  float local_2c;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x141;
  iVar4 = FUN_0036b4ec(param_1 + 0x254);
  if (iVar4 == 0) {
    if ((*(short *)(param_1 + 0x2238) == 0) &&
       (iVar4 = FUN_0036b1e0(DAT_00143128,param_1 + 0x254), iVar4 != 0)) {
      if (*(char *)(param_1 + 2) == '\x02') {
        FUN_0036f59c(param_1,DAT_0014312c + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
      }
      else {
        FUN_0036aeb4(param_1 + 0x28);
      }
    }
  }
  else {
    FUN_00359aa0(param_1 + 0x254,param_2,0x76);
    *(undefined2 *)(param_1 + 0x2238) = 1;
  }
  FUN_00360a1c(param_1,DAT_00143130);
  fVar1 = DAT_00143138;
  FUN_003598c8(DAT_00143140,
               *(float *)(*(int *)(param_1 + 0x170c) + 0x38) + *(float *)(DAT_00143134 + 0xa8),
               DAT_0014313c,DAT_00143138,param_2,param_1);
  iVar4 = FUN_003597dc(param_2,param_1);
  if (iVar4 == 0) {
    FUN_0036b3f4(fVar1,param_1,&local_2c,local_30,param_2);
    local_30[0] = local_30[0] - *(short *)(param_1 + 0xbe);
    if (local_30[0] < 0) {
      local_30[0] = -local_30[0];
    }
    fVar6 = (float)FUN_00338f60((int)local_30[0]);
    local_2c = local_2c * fVar6;
    uVar5 = (uint)(local_2c != fVar1);
    if ((local_2c != fVar1) && (fVar6 <= fVar1)) {
      uVar5 = 0xffffffff;
    }
    if ((int)uVar5 < 0) {
      FUN_00186794(param_1,param_2);
    }
    else if (uVar5 == 0) {
      iVar4 = FUN_0035976c(param_2,param_1,DAT_00143144);
      if (iVar4 == 0) {
        FUN_0036055c(param_2,param_1,DAT_00143148,0);
      }
      FUN_003604f0(param_1 + 0x254,param_2,0x75);
      iVar4 = DAT_00143150;
      *(float *)(param_1 + 0x6c) = fVar1;
      *(float *)(param_1 + 0x221c) = fVar1;
      uVar2 = DAT_0014314c;
      *(undefined1 *)(param_1 + 0x1749) = 0;
      *(undefined4 *)(iVar4 + 0xcc) = uVar2;
      *(undefined1 *)(iVar4 + 0xd4) = 0;
      sVar3 = *(short *)(param_1 + 0x82) + -0x8000;
      *(short *)(param_1 + 0x2220) = sVar3;
      *(short *)(param_1 + 0xbe) = sVar3;
    }
    else {
      *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x10;
    }
  }
  uVar2 = DAT_00143154;
  if ((*(uint *)(param_1 + 0x1714) & 0x10) != 0) {
    if ((*(char *)(param_1 + 0x80) != '2') && (iVar4 = FUN_00359690(param_2 + 0xa98), iVar4 != 0)) {
      FUN_00359678(uVar2,iVar4,(int)*(short *)(param_1 + 0x36));
    }
    *(undefined4 *)(param_1 + 0x221c) = uVar2;
  }
  return;
}
