// OoT3D decomp @ 003d4f38  name=FUN_003d4f38  size=632

void FUN_003d4f38(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;

  local_2c = *(float *)(param_1 + 0x28);
  local_28 = *(float *)(param_1 + 0x2c);
  local_24 = *(float *)(param_1 + 0x30);
  fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar2 = DAT_003d51b0;
  local_2c = local_2c + fVar6 * DAT_003d51b0;
  fVar6 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  uVar4 = DAT_003d51bc;
  uVar3 = DAT_003d51b4;
  local_24 = local_24 + fVar6 * fVar2;
  FUN_0036e168(DAT_003d51b4,DAT_003d51bc,DAT_003d51b8,DAT_003d51b4,param_1 + 0x6c);
  local_38 = local_2c;
  local_34 = local_28;
  local_30 = local_24;
  iVar5 = FUN_003736fc(DAT_003d51c0,uVar4,param_1 + 0x1e4);
  if (iVar5 != 0) {
    FUN_00375bcc(param_1,DAT_003d51c4);
  }
  iVar5 = FUN_003731e0(param_1 + 0x1e4);
  if (iVar5 == 0) {
    iVar5 = FUN_003736fc(DAT_003d51d8,uVar4,param_1 + 0x1e4);
    if ((iVar5 != 0) || (iVar5 = FUN_003736fc(DAT_003d51dc,uVar4,param_1 + 0x1e4), iVar5 != 0)) {
      FUN_0036f00c(DAT_003d51e4,DAT_003d51e0,param_2,param_1,&local_2c,10,400,0x3c,0);
      FUN_00375bcc(param_1,DAT_003d51e8);
      FUN_0036627c(param_2 + 0x364,2,0x19,5);
      return;
    }
  }
  else {
    if (*(short *)(param_1 + 0x8f6) < 1) {
      FUN_00374444(param_2,param_1,&local_2c,0xc0);
      FUN_00374428(param_1);
      return;
    }
    local_44 = uVar3;
    local_40 = uVar3;
    local_3c = uVar3;
    sVar1 = *(short *)(param_1 + 0x8f6) + -1;
    *(short *)(param_1 + 0x8f6) = sVar1;
    fVar2 = DAT_003d51d4;
    uVar4 = DAT_003d51d0;
    uVar3 = DAT_003d51cc;
    iVar5 = (int)((ulonglong)((longlong)DAT_003d51c8 * (longlong)(int)sVar1) >> 0x20);
    if ((iVar5 - (iVar5 >> 0x1f)) * -3 + (int)sVar1 != 0) {
      iVar5 = 4;
      do {
        local_2c = (float)FUN_003738a8(uVar3);
        local_2c = local_2c + local_38;
        fVar6 = (float)FUN_003738a8(uVar4);
        local_28 = fVar6 + fVar2 + local_34;
        local_24 = (float)FUN_003738a8(uVar3);
        local_24 = local_24 + local_30;
        FUN_003642f4(param_2,&local_2c,&local_44,&local_44,0xe6,7,0xff,0xff,0xff,0xff,0,0xff,0,1,0xb
                     ,1);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  return;
}
