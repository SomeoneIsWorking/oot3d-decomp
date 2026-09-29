// OoT3D decomp @ 002501ac  name=FUN_002501ac  size=516

void FUN_002501ac(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;

  uVar3 = DAT_002503bc;
  uVar2 = DAT_002503b4;
  iVar6 = *(int *)(DAT_002503b0 + param_2);
  FUN_0036e168(DAT_002503b4,DAT_002503bc,DAT_002503b8,DAT_002503b4,param_1 + 0x6c);
  iVar5 = FUN_003736fc(DAT_002503c0,uVar3,param_1 + 0x1e4);
  if (iVar5 != 0) {
    FUN_00375bcc(param_1,DAT_002503c4);
  }
  if (((*(uint *)(iVar6 + 0x1714) & 0x80) != 0) && (*(int *)(iVar6 + 0x124) == param_1)) {
    *(uint *)(iVar6 + 0x1714) = *(uint *)(iVar6 + 0x1714) & 0xffffff7f;
    uVar3 = DAT_002503cc;
    iVar5 = DAT_002503c8;
    *(undefined4 *)(iVar6 + 0x124) = 0;
    *(undefined2 *)(iVar5 + iVar6) = 200;
    FUN_00374bb8(uVar3,uVar3,param_2,param_1,(int)*(short *)(param_1 + 0x36));
    *(undefined2 *)(DAT_002503d0 + param_1) = 0;
  }
  iVar5 = FUN_003731e0(param_1 + 0x1e4);
  if (iVar5 != 0) {
    if (*(short *)(param_1 + 0x8f6) < 1) {
      FUN_00374444(param_2,param_1,param_1 + 0x28,0xe0);
      FUN_00374428(param_1);
      return;
    }
    local_30 = uVar2;
    local_2c = uVar2;
    local_28 = uVar2;
    sVar1 = *(short *)(param_1 + 0x8f6) + -1;
    *(short *)(param_1 + 0x8f6) = sVar1;
    iVar5 = DAT_002503d4;
    *(undefined4 *)(param_1 + 0xcc) = uVar2;
    fVar4 = DAT_002503e0;
    uVar3 = DAT_002503dc;
    uVar2 = DAT_002503d8;
    iVar5 = (int)((ulonglong)((longlong)iVar5 * (longlong)(int)sVar1) >> 0x20);
    if ((iVar5 - (iVar5 >> 0x1f)) * -3 + (int)sVar1 != 0) {
      iVar5 = 4;
      do {
        local_3c = (float)FUN_003738a8(uVar2);
        local_3c = local_3c + *(float *)(param_1 + 0x28);
        fVar7 = (float)FUN_003738a8(uVar3);
        local_38 = fVar7 + fVar4 + *(float *)(param_1 + 0x2c);
        local_34 = (float)FUN_003738a8(uVar2);
        local_34 = local_34 + *(float *)(param_1 + 0x30);
        FUN_003642f4(param_2,&local_3c,&local_30,&local_30,100,7,0xff,0xff,0xff,0xff,0,0xff,0,1,0xb,
                     1);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  return;
}
